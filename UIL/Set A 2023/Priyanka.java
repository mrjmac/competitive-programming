import java.io.*;
import java.util.*;

public class Priyanka {
    public static void main(String args[]) throws IOException
    {
        Scanner a = new Scanner(new File("priyanka.dat"));
        int times = a.nextInt();

        for (int i = 0; i < times; i++)
        {
            String word = a.next();
            
            char[] c = word.toCharArray();
            ArrayList<Character> vowels = new ArrayList<>();
            ArrayList<Character> cons = new ArrayList<>();

            for (int j = 0; j < c.length; j++)
            {
                if (c[j] == 'A' || c[j] == 'E' || c[j] == 'I' || c[j] == 'O' || c[j] == 'U')
                {
                    vowels.add(c[j]);
                }
                else
                {
                    cons.add(c[j]);
                }
            }

            Collections.sort(vowels);
            Collections.sort(cons);

            ArrayList<Character> rev = new ArrayList<>();

            for (int k = vowels.size() - 1; k >= 0; k--)
            {
                rev.add(vowels.get(k));
            }

            String w = "";
            for (int m = 0; m < rev.size(); m++)
            {
                w += rev.get(m);
            }
            for (int n = 0; n < cons.size(); n++)
            {
                w += cons.get(n);
            }

            if (word.equals(w))
            {
                System.out.println("WOO-HOO " + word);
            }
            else
            {
                System.out.println(w);
            }

        }
    }
}