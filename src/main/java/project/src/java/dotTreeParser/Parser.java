package project.src.java.dotTreeParser;

import project.src.java.dotTreeParser.treeStructure.Tree;
import project.src.java.dotTreeParser.treeStructure.TreeBuilder;

import java.io.File;
import java.io.IOException;
import java.util.Arrays;
import java.util.HashSet;
import java.util.List;
import java.util.Scanner;
import java.util.Set;
import java.util.stream.Collectors;
import java.util.stream.Stream;

public class Parser {

    public static List<String> featuresNames;
    public static Set<String> classesNames;
    public static int samplesQuantity = 0;;

    public static List<Tree> execute(String dataset) throws IOException {
    	System.out.println("Reading dataset...");
        readDatasetHeader(dataset);
        System.out.println("Reading trees...");
        return readDatasetSamples(dataset);
    }

    private static void readDatasetHeader(String dataset) throws IOException {
        var path = System.getProperty("user.dir") + "\\assets\\datasets\\" + dataset + ".csv";
        var scanner = new Scanner(new File(path));
        var line = scanner.nextLine().split(",");
        featuresNames = Arrays.asList(line);
        classesNames = new HashSet<String>();
        while(scanner.hasNext()){
            line = scanner.nextLine().split(",");
            classesNames.add(line[line.length-1]);
            samplesQuantity++;
        }

        scanner.close();
    }

    private static List<Tree> readDatasetSamples(String dataset) throws IOException {
        var path = System.getProperty("user.dir") + "/assets/trees/" + dataset;
        var files = listFiles(path);
        return files
            .stream()
            .map(file -> parseFromDot(path, file))
            .collect(Collectors.toList());
    }

    private static Tree parseFromDot(String path, String file){
        try {
            return TreeBuilder.execute(path+"/"+file, featuresNames, classesNames);
        } catch (Exception e) {
            System.err.println(e.getMessage());
            return null;
        }
    }

    private static Set<String> listFiles(String path) {
    	var files = new File(path).listFiles();
        return Stream.of(files)
          .filter(file -> !file.isDirectory())
          .map(File::getName)
          .collect(Collectors.toSet());
    }

    public static int getClassQuantity(){
        return classesNames.size();
    }

    public static int getFeatureQuantity(){
        /* the number of feature also count the class column, subtracting 1 to return the correct value */
        return featuresNames.size() - 1;
    }
}
