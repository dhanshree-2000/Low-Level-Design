package Strategy;

public class HTMLFormatter implements TextFormatter {
    
    @Override
    public String format(String text) {
        return "<html><body>" + text + "</body></html>";
    }
}