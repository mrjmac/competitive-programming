import java.io.*;
import java.util.*;

public class Petra {
    public static void main(String args[]) throws IOException
    {
        Scanner a = new Scanner(new File("petra.dat"));
        int n = a.nextInt();

        for (int i = 0; i < n; i++)
        {
            int num = a.nextInt();
            int gcd = 1;
            int times = (int)Math.min(num, reverse(num));

            for (int j = 2; j <= times; j++)
            {
                if (num % j == 0 && reverse(num) % j == 0)
                {
                    gcd = j;
                }
            }
            System.out.println(gcd);
        }
    }

    public static int reverse(int n)
    {
        String num = "" + n;
        String reverse = "";
        for (int i =  num.length() - 1; i >= 0; i--)
        {
            reverse += num.charAt(i);
        }
        return Integer.parseInt(reverse);
    }
    
}
