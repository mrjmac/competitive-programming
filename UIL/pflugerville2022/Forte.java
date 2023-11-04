import java.io.*;
import java.util.*;

public class Forte {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("forte.dat"));
        int n = test.nextInt();

        for (int i = 0; i < n; i++)
        {
            int curr = test.nextInt();
            String ans = "";

            if (curr > 0)
            {
                if (curr > 1)
                {
                    ans = "fortissimo";
                    curr--;
                }
                else
                {
                    ans = "forte";
                }
            }
            else
            {
                if (curr < -1)
                {
                    ans = "pianissimo";
                    curr++;
                }
                else
                {
                    ans = "piano";
                }
            }

            while (curr > 1)
            {
                ans = ans.substring(0, ans.indexOf("imo")) + "issimo";
                curr--;
            }

            while (curr < -1)
            {

                ans = ans.substring(0, ans.indexOf("imo")) + "issimo";
                curr++;
            }

            System.out.println(ans);
        }
        
    }  
}