import java.io.*;
import java.util.Scanner;

public class oneforall {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(System.in);
		int n = test.nextInt();

		int[] dp = new int[n + 1];
		
		dp[0] = n;
		dp[1] = 1;

		for (int i = 2; i <= n; i++) 
        {
			dp[i] = i;
			
			for (int j = 1; j < (i + 1) / 2; j++) 
            {
                dp[i] = Math.min(dp[i], dp[j] + dp[i - j]);
			}
			
			for (int j = 2; j < Math.sqrt(i + 1); j++) 
            {
				if (i % j == 0 && dp[j] + dp[i / j] < dp[i]) 
                {
					dp[i] = dp[j] + dp[i / j];
				}
			}
			
			String num = i + "";
			for(int j = 1; j < num.length(); j++) 
            {
				int one = Integer.parseInt(num.substring(0, j));
				int two = Integer.parseInt(num.substring(j));

				if (dp[one] + dp[two] < dp[i] && num.charAt(j) != '0') 
                {
					dp[i] = dp[one] + dp[two];
				}
			}
		}

		System.out.println(dp[n]);
    }
}