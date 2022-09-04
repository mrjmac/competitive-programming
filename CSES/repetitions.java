import java.io.*;
import java.util.StringTokenizer;

//old java code ignore
public class repetitions {
    public static void main(String args[]) throws IOException
    {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter pw = new PrintWriter(System.out);
        StringTokenizer st = new StringTokenizer(r.readLine());

        String test = st.nextToken();
        int max = 1;
        int count = 1;

        for (int j = 2; j <= test.length(); j++)
        {
            if(test.substring(j - 1, j).equals(test.substring(j - 2, j - 1)))
            {
                count += 1;
                if (count > max)
                {
                    max = count;
                }
                
            }
            else
            {
                count = 1;
            }
        }
        pw.println(max);

        pw.close();
    }
}
