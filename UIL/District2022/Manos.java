import java.io.*;
import java.util.*;

public class Manos {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("manos.dat"));
        int n = test.nextInt();

        for (int i = 0; i < n; i++)
        {
            int a, b;
            a = test.nextInt();
            b = test.nextInt();

            System.out.println((a == b) ? ("P2") : ("P1"));
        }

        
    }  
}