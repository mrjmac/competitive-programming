import java.io.*;
import java.util.*;

public class Metrognome {

    public static int lcm(int lcm, int n)
    {
        return (lcm * n) / gcf(lcm, n);
    }

    public static int gcf(int a, int b)
    {
        int max = -1;
        for (int i = 1; i < Math.min(a, b); i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                max  = i;
            }
        }

        return max;
    }
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("metrognome.dat"));
        int n = test.nextInt();

        for (int i = 0; i < n; i++)
        {
            int c = test.nextInt();
            int ans = 1;

            int[] nums = new int[c];
            
            for (int j = 0; j < c; j++)
            {
                nums[j] = test.nextInt();
            }

            for (int j = 0; j < c; j++)
            {
                ans = lcm(ans, nums[j]);
            }

            System.out.println(ans);

        }
        
    }  
}