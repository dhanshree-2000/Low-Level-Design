package Strategy;

public class PlainTextFormatter implements TextFormatter {
    
    @Override
    public String format(String text) {
        return text;
    }
}