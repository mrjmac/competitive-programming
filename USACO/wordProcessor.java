import java.util.StringTokenizer;
import java.io.*;

public class wordProcessor {
    public static void main(String[] args) throws IOException
    {
        BufferedReader r = new BufferedReader(new FileReader("word.in"));
        PrintWriter pw = new PrintWriter("word.out");
        StringTokenizer st = new StringTokenizer(r.readLine());

        int n = Integer.parseInt(st.nextToken());
        int k = Integer.parseInt(st.nextToken());

        String[] words = r.readLine().split(" ");
        int currChar = 0;

        for (int i = 0; i < n; i++)
        {
            if (currChar + words[i].length() <= k)
            {
                currChar += words[i].length();
                if (i == n - 1 || currChar + words[i + 1].length() > k)
                {
                    pw.print(words[i]);
                }
                else
                {
                    pw.print(words[i] + " ");
                }
                
            }
            else
            {
                currChar = words[i].length();
                if (i == n - 1 || currChar + words[i + 1].length() > k)
                {
                    pw.print("\n" + words[i]);
                }
                else
                {
                    pw.print("\n" + words[i] + " ");
                }
            }
        }

        pw.close();
        r.close();
    }  
}
