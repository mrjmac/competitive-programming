import java.io.*;
import java.util.ArrayList;
import java.util.StringTokenizer;

//old java code ignore
public class creatingStrings {

    static ArrayList<String> combs = new ArrayList<String>();
    public static void main(String[] args) throws IOException
    {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter pw = new PrintWriter(System.out);
        StringTokenizer st = new StringTokenizer(r.readLine());

        String a = st.nextToken();
        int n = a.length();
        int[] freq = new int[26];

        for (int i = 0; i < n; i++)
        {
            freq[a.charAt(i) - 97] += 1;
        }

        create("", freq, n);
        
        pw.println(combs.size());
        for (int i = 0; i < combs.size(); i++)
        {
            pw.println(combs.get(i));
        }

        pw.close();
    }

    public static void create(String a, int[] freq, int n)
    {
        if (a.length() == n)
        {
            combs.add(a);
        }
        else
        {
            for (int i = 0; i < freq.length; i++)
            {
                if (freq[i] > 0)
                {
                    freq[i] -= 1;
                    create(a + (char)(i + 97), freq, n);
                    freq[i] += 1;
                }
            }
        }
    }
}
