import java.io.*;
import java.util.*;

public class Rosin {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("rosin.dat"));
        int n = test.nextInt();

        for (int i = 0; i < n; i++)
        {
            int coins = test.nextInt();
            int[] money = new int[coins];

            for (int j = 0; j < coins; j++)
            {
                money[j] = test.nextInt();
            }

            int target = test.nextInt();

            int[] dp = new int[target + 1];
            dp[0] = 0;

            for (int j = 1; j <= target; j++)
            {
                int best = 101;
                for (int coin : money)
                {
                    if (j - coin >= 0)
                    {
                        int total = 1 + dp[j - coin];
                        if (total < best)
                        {
                            best = total;
                        }
                    }
                }

                dp[j] = best;
            }

            if (dp[target] != 101)
            {
                System.out.println(dp[target]);
            }
            else
            {
                System.out.println("No rosin for you! Come back in one year!");
            }
        }

    }  
}