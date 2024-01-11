import java.io.*;
import java.util.*;

public class Alan {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("alan.dat"));
        int n = test.nextInt();

        for (int i = 0; i < n; i++)
        {
            int curr = test.nextInt();
            double kelvin = (5.0 / 9.0) * (curr - 32) + 273.15;

            System.out.println(String.format("%d degrees Fahrenheit is equal to %.2f Kelvin", curr, kelvin));
        }

    }
}