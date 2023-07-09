package project.src.java.util;

import java.io.PrintStream;

public class CustomLog extends PrintStream {
    private String prefix;

    public CustomLog(PrintStream original, String prefix) {
        super(original);
        this.prefix = prefix;
    }

    @Override
    public void println(String x) {
        super.println(prefix + x);
    }
}