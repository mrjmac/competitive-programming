import java.io.*;
import java.util.*;

public class Cheese {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("cheese.dat"));
        
        int n = test.nextInt();

        for (int i = 0; i < n; i++)
        {
            int code = test.nextInt();

            if (code == 1776)
            {
                System.out.println("YEP");
            }
            else
            {
                System.out.println("NOPE");
            }
        }
    }  
}