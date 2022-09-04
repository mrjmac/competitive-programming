import java.io.*;
import java.math.BigDecimal;
import java.util.StringTokenizer;

public class bitStrings {
    public static void main(String args[]) throws IOException
    {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter pw = new PrintWriter(System.out);
        StringTokenizer st = new StringTokenizer(r.readLine());

        int n = Integer.parseInt(st.nextToken());
        BigDecimal ans = new BigDecimal(2);
        BigDecimal div = new BigDecimal(1000000007);
        ans = ans.pow(n).remainder(div);

        pw.println(ans);

        pw.close();
    }
}
