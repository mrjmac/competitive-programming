import java.io.*;
import java.util.*;

public class Alan {
    public static void main(String args[]) throws IOException
    {
        Scanner a = new Scanner(new File("alan.dat"));
        int times = a.nextInt();
        for (int i = 0; i < times; i++)
        {
            int f = a.nextInt();
            double k = 5.0 / 9 * (f - 32) + 273.15;
            System.out.print(f + " degrees Fahrenheit is equal to ");
            System.out.println(String.format("%.2f", k) + " Kelvin\n");
        }
    }
}