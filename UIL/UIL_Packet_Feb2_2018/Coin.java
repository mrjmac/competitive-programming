import java.io.*;
import java.util.*;

public class Coin {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("coin.dat"));
        int n = test.nextInt();

        for (int i = 0; i < n; i++)
        {
            int target = test.nextInt();
            int types = test.nextInt();

            int[] coins = new int[types];

            for (int j = 0; j < types; j++)
            {
                coins[j] = test.nextInt();
            }

            boolean possible = backtrack(0, 0, target, coins);

            System.out.println(possible ? "Possible" : "Not Possible");

        }

        
    }  

    public static boolean backtrack (int total, int curr, int target, int[] vals)
    {
        total += curr;

        if (total == target)
        {
            return true;
        }
        else if (total > target)
        {
            return false;
        }
        else 
        {
            boolean valid = false;
            for (int a : vals)
            {
                if (backtrack (total, a, target, vals))
                {
                    valid = true;
                }
            }

            return valid;
        }        
    }
}