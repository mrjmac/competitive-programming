import java.io.*;
import java.util.StringTokenizer;
//ignore old java code
public class increasingArray {
    public static void main(String args[]) throws IOException
    {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter pw = new PrintWriter(System.out);
        StringTokenizer st = new StringTokenizer(r.readLine());

        int test = Integer.parseInt(st.nextToken());
        long moves = 0;
        //code added so vscode stops yelling at me
        moves += test;
        moves -= test;
        //done
        st = new StringTokenizer(r.readLine());
        int last = Integer.parseInt(st.nextToken());
        int curr = 0;

        while (st.hasMoreTokens())
        {
            curr = Integer.parseInt(st.nextToken());
            if (curr < last)
            {
                moves += last - curr;
                curr = last;
            }
            last = curr;
        }
        pw.println(moves);

        pw.close();
    }
}
