import java.io.*;
import java.util.StringTokenizer;


public class twoSets {
    public static void main(String[] args) throws IOException
    {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter pw = new PrintWriter(System.out);
        StringTokenizer st = new StringTokenizer(r.readLine());

        long n = Long.parseLong(st.nextToken());
        long val = (n * (n + 1)) / 2;
        if (val % 2 != 0)
        {
            pw.print("NO");
        }
        else
        {
            if (n % 4 == 0)
            {
                pw.println("YES");
                pw.println(n / 2);

                int i = 1;
                int run = 0;
                while (i <= n)
                {
                    pw.print(i + " ");
                    if (run % 2 == 0)
                    {
                        i += 3;
                        run = 1;
                    }
                    else
                    {
                        i += 1;
                        run = 0;
                    }
                }
                pw.println();

                pw.println(n / 2);
                i = 2;
                run = 0;
                while (i <= n)
                {
                    pw.print(i + " ");
                    if (run % 2 == 0)
                    {
                        i += 1;
                        run = 1;
                    }
                    else
                    {
                        i += 3;
                        run = 0;
                    }
                }

            }
            else if(n % 4 == 3)
            {
                pw.println("YES");
                pw.println(((int)n / 2) + 1);
                pw.print(1 + " " + 2 + " ");
                int i = 4;
                int run = 0;
                while (i <= n)
                {
                    pw.print(i + " ");
                    if (run % 2 == 0)
                    {
                        i += 3;
                        run = 1;
                    }
                    else
                    {
                        i += 1;
                        run = 0;
                    }
                }
                pw.println();

                pw.println((int)n / 2);
                pw.print(3 + " ");
                i = 5;
                run = 0;
                while (i <= n)
                {
                    pw.print(i + " ");
                    if (run % 2 == 0)
                    {
                        i += 1;
                        run = 1;
                    }
                    else
                    {
                        i += 3;
                        run = 0;
                    }
                }
            }
            else 
            {
                pw.print("NO");
            }
        }

        pw.close();
    }
}
