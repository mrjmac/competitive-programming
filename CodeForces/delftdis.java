import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class delftdis 
{
    public static void main(String[] args) throws IOException 
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] input = br.readLine().split(" ");
        int n = Integer.parseInt(input[0]);
        int m = Integer.parseInt(input[1]);

        String[] map = new String[n];

        for (int i = 0; i < n; i++) 
        {
            map[i] = br.readLine();
        }

        int[][][] dp = new int[n + 1][m + 1][2];

        for (int[][] arr : dp) 
        {
            for (int[] a : arr) 
            {
                Arrays.fill(a, Integer.MIN_VALUE);
            }
        }

        dp[0][1][1] = dp[1][0][0] = 0;

        for (int i = 0; i <= n; i++) 
        {
            for (int j = 0; j <= m; j++) 
            {
                if (i < n) 
                {
                    dp[i + 1][j][0] = Math.max(dp[i + 1][j][0], Math.max(dp[i][j][0], dp[i][j][1] + (j > 0 && map[i].charAt(j - 1) == 'O' ? 1 : 0)));
                }
                
                if (j < m) 
                {
                    dp[i][j + 1][1] = Math.max(dp[i][j + 1][1], Math.max(dp[i][j][0] + (i > 0 && map[i - 1].charAt(j) == 'O' ? 1 : 0), dp[i][j][1]));
                }
            }
        }

        int ans = Math.max(dp[n][m][0], dp[n][m][1]);
        System.out.printf("%.15f%n", 10 * (n + m - (4 - Math.acos(-1)) * ans / 4));
    }
}
