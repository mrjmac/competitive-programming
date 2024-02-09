import java.io.*;
import java.util.*;

public class Eggs {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("eggs.dat"));

        int n  = test.nextInt();
        
        for (int i = 0; i < n; i++)
        {
            int a = test.nextInt();
            
            if (a < 3)
            {
                System.out.println("Small");
            }
            else if (a > 7)
            {
                System.out.println("Big");
            }
            else
            {
                System.out.println("Average");
            }
        }

        
    }  
}