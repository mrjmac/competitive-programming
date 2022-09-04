import java.io.*;
import java.util.StringTokenizer;
//ignore old java code
public class numberSpiral {
    public static void main(String[] args) throws IOException
    {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter pw = new PrintWriter(System.out);

        StringTokenizer st = new StringTokenizer(r.readLine());
        long test = Integer.parseInt(st.nextToken());
        
        for (int i = 0; i < test; i++)
        {
            st = new StringTokenizer(r.readLine());
            long y = Integer.parseInt(st.nextToken());
            long x = Integer.parseInt(st.nextToken());

            if (x == 1 && y == 1)
            {
                pw.println(1);
            }
            else if (x > y)
            {
                if (x % 2 != 0)
                {
                    pw.println((x * x) - y + 1);
                }
                else
                {
                    pw.println(((x - 1) * (x - 1)) + 1 - 1 + y);
                }
            }
            else
            {
                if (y % 2 == 0)
                {
                    pw.println((y * y) - x + 1);
                }
                else
                {
                    pw.println(((y - 1) * (y - 1)) + 1 - 1 + x);
                }
            }
            
        }
        
        pw.close();
    }
}