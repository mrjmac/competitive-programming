import java.io.*;
import java.util.*;

public class Feng {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("feng.dat"));

        int n = test.nextInt();

        for (int i = 0; i < n; i++)
        {
            String curr = test.next();
            String[] rn = curr.split(":");
            int hh = Integer.parseInt(rn[0]);
            int mm = Integer.parseInt(rn[1]);

            double x = mm / 5.0;
            double y = hh + mm / 60.0;
            
            System.out.println("Hour: " + String.format("%.1f", ((15 - y) % 12) * 30) + " Minute: " + String.format("%.1f", ((15 - x) % 12) * 30));
        }
    }
}