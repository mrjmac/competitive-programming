import java.util.StringTokenizer;
import java.io.*;

public class soldierAndBananas {
    public static void main(String[] args) throws IOException
    {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter pw = new PrintWriter(System.out);
        StringTokenizer st = new StringTokenizer(r.readLine());

        int k = Integer.parseInt(st.nextToken());
        int n = Integer.parseInt(st.nextToken());
        int w = Integer.parseInt(st.nextToken());

        long cost = w * (w + 1) / 2;
        cost *= k;
        pw.println(Math.max(cost - n, 0));
        pw.close();
    }
}
