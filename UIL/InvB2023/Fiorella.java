import java.io.*;
import java.util.*;

public class Fiorella {
    public static void main(String args[]) throws IOException
    {
        Scanner a = new Scanner(new File("fiorella.dat"));
        int n = a.nextInt();

        for (int i = 0; i < n; i++)
        {
            long w, x, y, z, g;
            w = a.nextInt();
            x = a.nextInt();
            y = a.nextInt();
            z = a.nextInt();
            g = a.nextInt();

            long temp = (g - z) / (w * y);

            System.out.println((int)(Math.log(temp) / Math.log(x)));
        }
    }  
}
