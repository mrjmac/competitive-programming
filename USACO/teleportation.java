import java.io.*;
import java.util.StringTokenizer;

//old java code ignore
public class teleportation {
    public static void main(String[] args) throws IOException
    {
        BufferedReader r = new BufferedReader(new FileReader("teleport.in"));
        PrintWriter pw = new PrintWriter("teleport.out");
        StringTokenizer st = new StringTokenizer(r.readLine());
        int a = Integer.parseInt(st.nextToken());
        int b = Integer.parseInt(st.nextToken());
        int x = Integer.parseInt(st.nextToken());
        int y = Integer.parseInt(st.nextToken());

        int ans = Math.abs(a - b);
        ans = Math.min(ans, Math.abs(a - x) + Math.abs(b - y));
        ans = Math.min(ans, Math.abs(a - y) + Math.abs(b - x));
        pw.println(ans);
        pw.close();
        r.close();
    }
}