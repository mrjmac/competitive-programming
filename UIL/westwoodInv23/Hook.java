import java.io.*;
import java.util.*;

public class Hook {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("hook.dat"));

        int n = test.nextInt();
        test.nextLine();

        for (int i = 0; i < n; i++)
        {
            double d = test.nextDouble();
            double h = test.nextDouble();
            double t = h / 100;
            if (d == 0)
            {
                System.out.println("90.000");
            }
            else if (h == 0)
            {
                System.out.println("0.000");
            }
            else 
            {
                h = h + (50 * t);
                System.out.println(String.format("%.3f", Math.toDegrees(Math.atan(h / d))));
            }
        }
    }
}