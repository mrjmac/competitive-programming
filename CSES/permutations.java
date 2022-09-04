import java.io.*;
import java.util.StringTokenizer;
//ignore old java code
public class permutations {
    public static void main(String[] args) throws IOException
    {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter pw = new PrintWriter(System.out);

        StringTokenizer st = new StringTokenizer(r.readLine());
        int num = Integer.parseInt(st.nextToken());

        if (num == 3 || num == 2)
        {
            pw.println("NO SOLUTION");
        }
        else
        {
            for (int i = 2; i <= num; i += 2)
            {
                pw.print(i + " ");
            }

            for (int i = 1; i <= num; i += 2)
            {
                pw.print(i + " ");
            }
        }

        pw.close();
    }
}