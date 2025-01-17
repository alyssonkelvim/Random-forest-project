package project.src.java.util;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class FileBuilder {

    public static void execute(String content, String filePath){
        try {
            var path = System.getProperty("user.dir") + "/generated/" + filePath;
            String directory = path.substring(0, path.lastIndexOf("/"));
            Path diretorioPath = Paths.get(directory);
            if (!Files.exists(diretorioPath)) {
                try {
                    Files.createDirectory(diretorioPath);
                } catch (IOException e) {
                    System.out.println("Failed while creating directory: " + e.getMessage());
                }
            } 
            var fileWriter = new FileWriter(path);
            BufferedWriter out = new BufferedWriter(fileWriter);
            out.write(content);
            out.close();
        }
        catch(IOException e){
            System.err.println("Error writing file '" + filePath + "'");
            System.err.println(e.toString());
        }
    }
    public static boolean createDir(String path){

        var folderPath = System.getProperty("user.dir") + "/generated/" + path;
        File folder = new File(folderPath);
        return folder.mkdir();

    }
}
