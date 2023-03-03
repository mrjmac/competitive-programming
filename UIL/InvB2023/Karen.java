import java.io.*;
import java.util.*;

public class Karen {
    public static void main(String args[]) throws IOException
    {
        Scanner a = new Scanner(new File("karen.dat"));
        int n = a.nextInt();

        for (int i = 0; i < n; i++)
        {
            int num = a.nextInt();
            double sqrt = Math.sqrt(num);
            long perf = Math.round(sqrt);
            long output = (long)Math.pow(perf, 2);
            System.out.println(output);
        }

        
        
    }
    
}
