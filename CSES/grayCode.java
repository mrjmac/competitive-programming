import java.io.*;
import java.util.StringTokenizer;
//ignore old java code
public class grayCode {
    public static void main(String[] args) throws IOException
    {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(r.readLine());
        PrintWriter pw = new PrintWriter(System.out);

        int n = Integer.parseInt(st.nextToken());
        add(new String[]{"0", "1"}, n, pw, 1);
        pw.close();

    }

    public static void add(String[] a, int n, PrintWriter pw, int curr)
    {
        if (curr == n)
        {
            for (int i = 0; i < a.length; i++)
            {
                pw.println(a[i]);
            }
        }
        else
        {
            String[] next = new String[a.length * 2];
            for (int i = 0; i < a.length; i++)
            {
                next[i] = a[i] + "0";
                next[next.length - i - 1] = a[i] + "1";
            }
            add(next, n, pw, curr + 1);
        }
        
    }
}
