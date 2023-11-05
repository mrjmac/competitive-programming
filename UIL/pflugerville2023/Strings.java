import java.io.*;
import java.util.*;

public class Strings {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("strings.dat"));

        while(test.hasNextLine())
        {
            String s = test.nextLine();
            System.out.println(s);
            System.out.println(s.length());
            System.out.println(s.toUpperCase());
            System.out.println(s.substring(s.length() / 2));
            System.out.println(s.toLowerCase().charAt(0) + "" + s.toLowerCase().charAt(s.length() - 1) + "\n");
        }

        
    }  
}