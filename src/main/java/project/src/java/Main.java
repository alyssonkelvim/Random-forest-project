package project.src.java;

import java.io.IOException;
import java.util.List;

import project.src.java.approaches.cpu.conditional.ConditionalCPUGenerator;
import project.src.java.approaches.cpu.table.TableCPUGenerator;
import project.src.java.approaches.fpga.FPGA;
import project.src.java.approaches.gpu.conditional.ConditionalGPUGenerator;
import project.src.java.approaches.gpu.conditional.count.ConditionalCountGPUGenerator;
import project.src.java.approaches.gpu.table.TableConstantGPUGenerator;
import project.src.java.approaches.gpu.table.TableGPUGenerator;
import project.src.java.approaches.gpu.table.TableRestrictGPUGenerator;
import project.src.java.approaches.gpu.table.TableSharedGPUGenerator;
import project.src.java.approaches.gpu.table.count.TableConstantCountGPUGenerator;
import project.src.java.approaches.gpu.table.count.TableCountGPUGenerator;
import project.src.java.approaches.gpu.table.count.TableRestrictCountGPUGenerator;
import project.src.java.approaches.gpu.table.count.TableSharedCountGPUGenerator;
import project.src.java.dotTreeParser.Parser;
import project.src.java.dotTreeParser.treeStructure.Tree;
import project.src.java.util.CustomLog;
import project.src.java.util.PythonScriptCaller;

public class Main {

    private static String dataset;
    private static String path;
    public static boolean calculateAccuarcy;

    public static void main(String[] args) throws IOException {
    	// Criar a instância de ConcatenatingPrintStream
        CustomLog customOut = new CustomLog(System.out, "[Java - Code Generator]: ");
        // Redirecionar a saída padrão para a instância personalizada
        System.setOut(customOut);
        
        dataset = args[0];
        String mode = args[1];
        if(args.length > 2) {
        	calculateAccuarcy = args[2].equals("true");
        }
        path = System.getProperty("user.dir");

        switch (mode) {
            case "ConditionalGPU": startConditionalGPUGenerator(); break;
            case "ConditionalCPU": startConditionalCPUGenerator(); break;
            case "ConditionalCountGPU": startConditionalCountGPUGenerator(); break;
            case "TableCPU": startTableCPUGenerator(); break;
            case "TableGPU": startTableGPUGenerator(); break;
            case "TableCountGPU": startTableCountGPUGenerator(); break;
            case "TableConstantGPU": startTableConstantGPUGenerator(); break;
            case "TableConstantCountGPU": startTableConstantCountGPUGenerator(); break;
            case "TableSharedGPU": startTableSharedGPUGenerator(); break;
            case "TableSharedCountGPU": startTableSharedCountGPUGenerator(); break;
            case "TableRestrictGPU": startTableRestrictGPUGenerator(); break;
            case "TableRestrictCountGPU": startTableRestrictCountGPUGenerator(); break;
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
        ConditionalGPUGenerator.execute(trees, dataset);
    }
    
    public static void startConditionalCountGPUGenerator() throws IOException{
        var trees = Parser.execute(dataset);
        ConditionalCountGPUGenerator.execute(trees, dataset);
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
    
    public static void startTableCountGPUGenerator() throws IOException {
        var trees = Parser.execute(dataset);
        TableCountGPUGenerator.execute(trees, dataset);
    }
    
    public static void startTableConstantGPUGenerator() throws IOException {
        var trees = Parser.execute(dataset);
        TableConstantGPUGenerator.execute(trees, dataset);
    }
    
    public static void startTableConstantCountGPUGenerator() throws IOException {
        var trees = Parser.execute(dataset);
        TableConstantCountGPUGenerator.execute(trees, dataset);
    }
    
    public static void startTableSharedGPUGenerator() throws IOException {
        var trees = Parser.execute(dataset);
        TableSharedGPUGenerator.execute(trees, dataset);
    }
    
    public static void startTableSharedCountGPUGenerator() throws IOException {
        var trees = Parser.execute(dataset);
        TableSharedCountGPUGenerator.execute(trees, dataset);
    }
    
    public static void startTableRestrictGPUGenerator() throws IOException {
        var trees = Parser.execute(dataset);
        TableRestrictGPUGenerator.execute(trees, dataset);
    }
    
    public static void startTableRestrictCountGPUGenerator() throws IOException {
        var trees = Parser.execute(dataset);
        TableRestrictCountGPUGenerator.execute(trees, dataset);
    }
}