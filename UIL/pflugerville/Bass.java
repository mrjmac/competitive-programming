import java.io.*;
import java.util.*;

public class Bass {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("bass.dat"));
        int n = test.nextInt();

        for (int i = 0; i < n; i++)
        {
            double a = test.nextInt();
            double q = test.nextInt();
            double t = test.nextInt();


            double num = Math.log(Math.pow(a, q)) / Math.log(2);
            double denom = Math.sqrt(Math.abs(42 * Math.sin(t)));
            
            System.out.println(String.format("%.2f", num / denom));
        }
        
    }  
}