import java.io.*;
import java.util.StringTokenizer;


public class team {
    public static void main(String[] args) throws IOException
    {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter pw = new PrintWriter(System.out);
        StringTokenizer st = new StringTokenizer(r.readLine());

        int n = Integer.parseInt(st.nextToken());
        int a, b, c;
        int result = 0;

        for (int i = 0; i < n; i ++)
        {
            st = new StringTokenizer(r.readLine());
            a = Integer.parseInt(st.nextToken());
            b = Integer.parseInt(st.nextToken());
            c = Integer.parseInt(st.nextToken());

            if (a + b + c > 1)
            {
                result += 1;
            }

        }
        pw.println(result);
        pw.close();
    }
    
}
