import java.io.*;
import java.util.StringTokenizer;

public class test {
    public static void main(String args[]) throws IOException
    {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter pw = new PrintWriter(System.out);
        StringTokenizer st = new StringTokenizer(r.readLine());

        int n = Integer.parseInt(st.nextToken());

        pw.close();
    }
}