import java.io.*;
import java.util.*;

public class Gael {
    public static void main(String args[]) throws IOException
    {
        Scanner a = new Scanner(new File("gael.dat"));

        int n = a.nextInt();

        for (int i = 0 ; i < n; i++)
        {
            String word = a.next();
            System.out.println(word);
            for (int j = 1; j < word.length() - 1; j++)
            {
                System.out.print(word.charAt(j));
                for (int k = 1; k < word.length() - 1; k++)
                {
                    System.out.print(" ");
                }
                System.out.println(word.charAt(word.length() - j - 1));
            }

            for (int j = 1; j < word.length(); j++)
            {
                System.out.print(word.charAt(word.length() - j));
            }

            System.out.println(word.charAt(0));;
        }
    }
}