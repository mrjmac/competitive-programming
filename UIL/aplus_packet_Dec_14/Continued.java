import java.io.*;
import java.util.*;

public class Continued {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("continued.dat"));
        
        while (test.hasNextInt())
        {
            recur(test.nextInt(), test.nextInt(), 0);
            System.out.println();
        }        
    }  

    public static void recur(int a, int b, int edge)
    {
        if (edge != 0 && a == 1)
        {
            
        }
        else
        {
            System.out.print(a / b + " ");
            recur(b, a % b, edge += 1);
        }
    }
}