import java.io.*;
import java.util.*;

public class Gael {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("gael.dat"));
        int n = test.nextInt();
        test.nextLine();

        for (int i = 0; i < n; i++)
        {
            String curr = test.nextLine();
            System.out.println(curr);

            for (int j = 1; j < curr.length() - 1; j++)
            {
                String output = curr.charAt(j) + "";
                for (int k = 0; k < curr.length() - 2; k++)
                {
                    output += " ";
                }
                output += curr.charAt(curr.length() - j - 1);

                System.out.println(output);
            }

            String output = "";

            for (int j = curr.length() - 1; j >= 0; j--)
            {
                output += curr.charAt(j);
            }

            System.out.println(output);
        
        }

    }
}