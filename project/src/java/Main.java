package project.src.java;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.List;

import project.src.java.approaches.cpu.conditional.ConditionalCPUGenerator;
import project.src.java.approaches.cpu.table.TableCPUGenerator;
import project.src.java.approaches.fpga.FPGA;
import project.src.java.approaches.fpga.conditionalGenerator.TreeGenerator;
import project.src.java.approaches.gpu.conditional.ConditionalGPUGenerator;
import project.src.java.approaches.gpu.conditional.TestFileGenerator;
import project.src.java.approaches.gpu.table.TableGPUGenerator;
import project.src.java.dotTreeParser.Parser;
import project.src.java.dotTreeParser.treeStructure.Tree;
import project.src.java.util.PythonScriptCaller;

public class Main {

    private static String dataset;
    private static String path;

    public static void main(String[] args) throws IOException {
        dataset = args[0];
        String mode = args[1];
        path = System.getProperty("user.dir");

        switch (mode) {
            case "ConditionalGPU": startConditionalGPUGenerator(); break;
            case "ConditionalCPU": startConditionalCPUGenerator(); break;
            case "TableCPU": startTableCPUGenerator(); break;
            case "TableGPU": startTableGPUGenerator(); break;
            case "ConditionalFPGA": startConditionalFPGAGenerator(); break;
            default: throw new IllegalArgumentException("Unexpected value for mode: " + mode);
        }
    }

    public static void startConditionalFPGAGenerator() throws IOException{
        PythonScriptCaller caller = new PythonScriptCaller();
        caller.execute(path, dataset);
        List<Tree> trees = Parser.execute(dataset);
        FPGA FPGAGenerator = new FPGA(trees, dataset, Parser.getClassQuantity(), Parser.getFeatureQuantity(), false);
        FPGAGenerator.execute();
        System.out.println("job finished: Success");
    }

    public static void startConditionalGPUGenerator() throws IOException{
        var trees = Parser.execute(dataset);
        ConditionalGPUGenerator.execute(trees);
        TestFileGenerator.execute(trees, Parser.featuresNames.size(), dataset, Parser.samplesQuantity);
    }

    public static void startConditionalCPUGenerator() throws IOException{
        var trees = Parser.execute(dataset);
        ConditionalCPUGenerator.execute(trees, dataset);
    }

    public static void startTableCPUGenerator() throws IOException {
        var trees = Parser.execute(dataset);
        TableCPUGenerator.execute(trees, dataset);
    }

    public static void startTableGPUGenerator() throws IOException {
        var trees = Parser.execute(dataset);
        TableGPUGenerator.execute(trees, dataset);
    }
}