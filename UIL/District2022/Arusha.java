import java.io.*;
import java.util.*;

public class Arusha {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("arusha.dat"));
        int n = test.nextInt();

        for (int j = 0; j < n; j++) {
            String S = test.next();
            String R = test.next();

            int r = 0;
            int l = 0;

            for (int i = 0; i < R.length(); i++) {
                if (R.charAt(i) == 'R') {
                    r++;
                } else if (R.charAt(i) == 'L') {
                    l++;
                }
            }

            if (r - l > 0) {
                for (int i = 0; i < r - l; i++) {
                    S = S.charAt(S.length() - 1) + S.substring(0, S.length() - 1);
                }
            } else if (r - l < 0) {
                for (int i = 0; i < l - r; i++) {
                    S = S.substring(1) + S.charAt(0);
                }
            }

            System.out.println(S);
        }
    }  
}