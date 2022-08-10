import java.io.*;
import java.util.StringTokenizer;

public class bucketBrigade {
    public static void main(String[] args) throws IOException
    {
        BufferedReader r = new BufferedReader(new FileReader("buckets.in"));
        PrintWriter pw = new PrintWriter("buckets.out");

        int BX = 0, BY = 0, RX = 0, RY = 0, LX = 0, LY = 0;
        
        for (int y = 0; y < 10; y++)
        {
            StringTokenizer st = new StringTokenizer(r.readLine());
            String a = st.nextToken();
            for (int x = 0; x < 10; x++)
            {
                
                if (a.charAt(x) == 'B')
                {
                    BX = x;
                    BY = y;
                }

                if (a.charAt(x) == 'R')
                {
                    RY = y;
                    RX = x;
                }

                if (a.charAt(x) == 'L')
                {
                    LX = x;
                    LY = y;
                }
            }
        }

        int ans = Math.abs(BX - LX) + Math.abs(BY - LY) - 1;

        if (BY == LY && BY == RY && ((LX < RX && RX < BX) || (BX < RX && RX < LX)))
		{
			ans += 2;
		}
        else if (BX == LX && BX == RX && ((LY < RY && RY < BY) || (BY < RY && RY < LY)))
        {
            ans += 2;
        }

        pw.println(ans);
        pw.close();
        r.close();
    }
}
