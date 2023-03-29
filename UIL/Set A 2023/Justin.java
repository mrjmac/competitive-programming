import java.io.*;
import java.util.*;

public class Justin {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("justin.dat"));

        int n = test.nextInt();

        for (int i = 0; i < n; i++)
        {
            double price = test.nextDouble();
            double down = test.nextDouble();
            double apr = test.nextDouble();
            int months = test.nextInt();

            double a = price - down;
            double r = apr / 1200;

            double p = Math.round(((a * r) / (1 - Math.pow(1 + r, -months))) * 100d) / 100d;
            double c = p * months + down;

            String one = String.format("$%9.2f ", p);
            String two = String.format("$%9.2f ", c);
            String three = String.format("$%9.2f", c - price);

            System.out.println(one + two + three);

        }
    }
}