import java.io.*;
import java.util.*;

public class Michaela {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("michaela.dat"));
        int n = test.nextInt();

        HashMap<Character, String> ref = new HashMap<>();

        for (int i = 32; i <= 90; i++)
        {
            String curr = Integer.toBinaryString(i);
            for (int j = 0; j < curr.length(); j++)
            {
                if (curr.charAt(j) == '0')
                {
                    String first = curr.substring(0, j);
                    String last = curr.substring(j + 1);
                    curr = first + "." + last;
                }
                if (curr.charAt(j) == '1')
                {
                    String first = curr.substring(0, j);
                    String last = curr.substring(j + 1);
                    curr = first + "-" + last;
                }
            }
            //System.out.println(curr);
            ref.put((char)i, curr);
        }

        test.nextLine();

        for (int i = 0; i < n; i++)
        {
            String curr = test.nextLine();
            curr = curr.toUpperCase();
            System.out.print("Message #" + (i + 1) + ": ");

            for (int j = 0; j < curr.length(); j++)
            {
                System.out.print(ref.get(curr.charAt(j)) + " ");
            }
            System.out.println("");
        }

        
    }  
}