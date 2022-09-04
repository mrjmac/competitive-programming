import java.io.*;
import java.util.StringTokenizer;

//old java code ignore
public class towerOfHanoi {
    public static void main(String[] args) throws IOException
    {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(r.readLine());
        PrintWriter pw = new PrintWriter(System.out);

        int n = Integer.parseInt(st.nextToken());
        pw.println((int)Math.pow(2, n) - 1);
        hanoi(n, 1, 3, 2, pw);
        pw.close();
    }

    public static void hanoi(int n, int f, int t, int a, PrintWriter pw)
    {
        if (n > 0)
        {
            hanoi(n - 1, f, a, t, pw);
            pw.println(f + " " + t);
            hanoi(n - 1, a, t, f, pw);
        }
    }
}
