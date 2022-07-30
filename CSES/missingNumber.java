import java.io.*;
import java.util.StringTokenizer;

public class missingNumber {
    public static void main(String args[]) throws IOException
    {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter pw = new PrintWriter(System.out);
        StringTokenizer st = new StringTokenizer(r.readLine());

        long a = Integer.parseInt(st.nextToken());
        long total = (a * (a + 1))/2;
        long incom = 0;

        st = new StringTokenizer(r.readLine());
        while (st.hasMoreTokens())
        {
            incom += Integer.parseInt(st.nextToken());
        }

        pw.println((total - incom));

        pw.close();
    }
}