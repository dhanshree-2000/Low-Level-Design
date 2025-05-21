package Strategy;

import java.util.Scanner;

public class Exercise {
    
    public void run() {
        
        Scanner sc = new Scanner(System.in);
        Document document = new Document();
        
        String userInput = sc.nextLine();
        document.setContent(userInput);

        // Using PlainTextFormatter
        document.setFormatter(new PlainTextFormatter());
        
        System.out.println("Plain Text:");
        document.display();

        // Using HTMLFormatter
        document.setFormatter(new HTMLFormatter());
        
        System.out.println("HTML Format:");
        document.display();

        // Using MarkdownFormatter
        document.setFormatter(new MarkdownFormatter());
        
        System.out.println("Markdown Format:");
        document.display(); 
        
        sc.close();
    }
}