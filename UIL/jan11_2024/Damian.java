import java.io.*;
import java.util.*;

public class Damian {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("damian.dat"));
        int n = test.nextInt();

        for (int i = 0; i < n; i++)
        {
            ArrayList<Integer> factors = new ArrayList<>();
            int num = test.nextInt();

            for (int j = 1; j <= num; j++)
            {
                if (num % j == 0)
                {
                    factors.add(j);
                }
            }

            for (int factor : factors)
            {
                if (isGrowing(factor))
                {
                    System.out.print(factor + " ");
                }
            }

            System.out.print("\n");
        }
    }

    public static boolean isGrowing(int factor)
    {
        int min = Integer.MAX_VALUE;
        while (factor > 0)
        {
            int curr = factor % 10;
            if (curr < min)
            {
                factor /= 10;
                min = curr;
            }
            else
            {
                return false;
            }
        }

        return true;
    }
}