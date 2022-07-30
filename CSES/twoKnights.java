import java.io.*;
import java.util.StringTokenizer;


public class twoKnights {
    public static void main(String[] args) throws IOException
    {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter pw = new PrintWriter(System.out);

		StringTokenizer st = new StringTokenizer(r.readLine());
        long num = Integer.parseInt(st.nextToken());

        for (long i = 1; i <= num; i++)
        {
            pw.println(((i * i) * ((i * i) - 1) / 2) - (4 * (i - 1) * (i - 2)));
        }

        pw.close();
    }
}
