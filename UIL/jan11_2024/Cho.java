import java.io.*;
import java.util.*;

public class Cho {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("cho.dat"));
        int n = test.nextInt();
        test.nextLine();

        for (int i = 0; i < n; i++)
        {
            TreeMap<Character, Integer> freq = new TreeMap<>();
            String curr = test.nextLine();

            for (int j = 0; j < curr.length(); j++)
            {
                if (isLetter(curr.charAt(j)))
                {
                    if (freq.get(curr.charAt(j)) != null)
                    {
                        int old = freq.get(curr.charAt(j));
                        freq.put(curr.charAt(j), ++old);
                    }
                    else
                    {
                        freq.put(curr.charAt(j), 1);
                    }
                }
            }

            int max = 0;
            char answer = 'a';

            for (Character a : freq.keySet())
            {
                if (freq.get(a) > max)
                {
                    max = freq.get(a);
                    answer = a;
                }
            }

            System.out.println(answer);
        }
    }

    public static boolean isLetter(char a)
    {
        return ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'));
    }
}