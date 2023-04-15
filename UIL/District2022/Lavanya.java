import java.io.*;
import java.util.*;

public class Lavanya {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("lavanya.dat"));
        int k = test.nextInt();

        for (int j = 0; j < k; j++) {
            int n = test.nextInt();

            int N = n;

            ArrayList<Integer> f = new ArrayList<Integer>();

            while (n > 1) {
                int i = num(n);

                f.add(i);

                n /= i;
            }

            Collections.sort(f);

            System.out.print(N + " = " + f.get(0));

            for (int i = 1; i < f.size(); i++) {
                System.out.print(" * " + f.get(i));
            }

            System.out.println();
        }
    }

    public static int num(int n) {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                return i;
            }
        }
        return n;
    }
}