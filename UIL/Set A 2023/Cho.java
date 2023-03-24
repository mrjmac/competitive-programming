import java.io.*;
import java.util.*;

public class Cho {
    public static void main(String args[]) throws IOException
    {
        Scanner a = new Scanner(new File("cho.dat"));
        int n = a.nextInt();
        a.nextLine();

        for (int i = 0; i < n; i++)
        {
            String line = a.nextLine();
            char[] arr = line.toCharArray();

            HashMap<Character, Integer> h = new HashMap<>();

            for (char curr = 'A'; curr <= 'Z'; curr++)
            {
                h.put(curr, 0);
            } 

            for (char curr = 'a'; curr <= 'z'; curr++)
            {
                h.put(curr, 0);
            }

            for (int j = 0; j < arr.length; j++)
            {
                h = count(arr[j], h);
            }
            
            char max = 0;
            int numMax = 0;

            for (char k = 'A'; k <= 'Z'; k++)
            {
                if (h.get(k) > numMax)
                {
                    max = k;
                    numMax = h.get(k);
                }
            }

            for (char k = 'a'; k <= 'z'; k++)
            {
                if (h.get(k) > numMax)
                {
                    max = k;
                    numMax = h.get(k);
                }
            }

            System.out.println(max);
        }
    }

    public static HashMap<Character, Integer> count(char c, HashMap<Character, Integer> h)
    {
        for (char curr = 'A'; curr <= 'Z'; curr++)
        {
            if (c == curr)
            {
                h.put(curr, h.get(curr) + 1);
            }
        } 

        for (char curr = 'a'; curr <= 'z'; curr++)
        {
            if (c == curr)
            {
                h.put(curr, h.get(curr) + 1);
            }
        } 


        return h;
    }
}