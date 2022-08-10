import java.util.Arrays;
import java.util.StringTokenizer;
import java.io.*;

public class doYouKnowYourABCs {
    public static void main(String[] args) throws IOException
    {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter pw = new PrintWriter(System.out);
        StringTokenizer st = new StringTokenizer(r.readLine());
        
        int[] nums = new int[7];

        for (int i = 0; i < 7; i++)
        {
            nums[i] = Integer.parseInt(st.nextToken());
        }
        Arrays.sort(nums);
        pw.println(nums[0] + " " + nums[1] + " " + (nums[6] - nums[1] - nums[0]));
        pw.close();

        
    }
}
