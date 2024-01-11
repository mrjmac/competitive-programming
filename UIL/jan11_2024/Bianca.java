import java.io.*;
import java.util.*;

public class Bianca {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("bianca.dat"));
        int n = test.nextInt();

        for (int i = 0; i < n; i++)
        {
            int a = test.nextInt();
            int b = test.nextInt();

            System.out.println(String.format("%.2f", Math.sqrt(Math.pow(a, 2) + Math.pow(b, 2))));
        }


    }
}