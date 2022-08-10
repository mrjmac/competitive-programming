import java.io.*;
import java.util.StringTokenizer;

public class promotionCounting {
    public static void main(String[] args) throws IOException
    {
        BufferedReader r = new BufferedReader(new FileReader("promote.in"));
        PrintWriter pw = new PrintWriter("promote.out");

        StringTokenizer st = new StringTokenizer(r.readLine());
        //int bb = Integer.parseInt(st.nextToken());
		//int ba = Integer.parseInt(st.nextToken());

		st = new StringTokenizer(r.readLine());
		int sb = Integer.parseInt(st.nextToken());
		int sa = Integer.parseInt(st.nextToken());

		st = new StringTokenizer(r.readLine());
		int gb = Integer.parseInt(st.nextToken());
		int ga = Integer.parseInt(st.nextToken());

		st = new StringTokenizer(r.readLine());
		int pb = Integer.parseInt(st.nextToken());
		int pa = Integer.parseInt(st.nextToken());

        int gold = pa - pb;
        int silver = ga - gb + pa - pb;
        int bronze = sa - sb + ga - gb + pa - pb;

        pw.println(bronze);
        pw.println(silver);
        pw.println(gold);
        pw.close();
        r.close();
    }
}