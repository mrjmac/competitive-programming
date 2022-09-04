import java.util.StringTokenizer;
import java.io.*;
import java.util.ArrayList;
//ignore old java code
public class appleDivision {
    static int n;
    static int[] nums;
    static ArrayList<Long> ans;

    public static void main(String[] args) throws IOException
    {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter pw = new PrintWriter(System.out);
        StringTokenizer st = new StringTokenizer(r.readLine());

        n = Integer.parseInt(st.nextToken());
        nums = new int[n];
        ans = new ArrayList<>();

        st = new StringTokenizer(r.readLine());
        for (int i = 0; i < n; i++)
        {
            nums[i] = Integer.parseInt(st.nextToken());
        }

        solve(0, 0, 0);
        
        Long min = Long.MAX_VALUE;
        for (int i = 0; i < ans.size(); i++)
        {
            if (ans.get(i) < min)
            {
                min = ans.get(i);
            }
        }

        pw.println(min);
        pw.close();
        
        
        
    }

    public static void solve(int index, long sum1, long sum2)
    {
        if (index == n)
        {
            ans.add(Math.abs(sum1 - sum2));
        }
        else
        {
            solve(index + 1, sum1 + nums[index], sum2);
            solve(index + 1, sum1, sum2 + nums[index]);
        }
    }
}
