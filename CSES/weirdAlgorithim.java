import java.io.*;
import java.util.StringTokenizer;

//old java code ignore
public class weirdAlgorithim {
    public static void main(String args[]) throws IOException
    {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter pw = new PrintWriter(System.out);

		StringTokenizer st = new StringTokenizer(r.readLine());

        long a = Integer.parseInt(st.nextToken());
        String output = a + " ";
        while (a != 1)
        {
            if (a % 2 == 0)
            {
                a /= 2;
            }
            else 
            {
                a = (a * 3) + 1;
            }
            output += a + " ";
        }
        pw.println(output);

        pw.close();
    }
}