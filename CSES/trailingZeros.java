import java.io.*;
import java.util.StringTokenizer;

public class trailingZeros {
    public static void main(String[] args) throws IOException
    {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter pw = new PrintWriter(System.out);
        StringTokenizer st = new StringTokenizer(r.readLine());

        int n = Integer.parseInt(st.nextToken());
        int ans = 0;

        for (int i = 5; n / i >= 1; i *= 5)
        {
            ans += n / i;
        }

        pw.println(ans);
        pw.close();
        
    }
}