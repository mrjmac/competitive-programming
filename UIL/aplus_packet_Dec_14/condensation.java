import java.io.*;
import java.util.*;

public class condensation {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("condensation.dat"));
        
        while (test.hasNextLine())
        {
            String curr = test.nextLine();
            System.out.println(sanatize(curr));
        }
        
    }  

    public static String sanatize(String word)
    {
        String output = "";
        if (word.equals("nine"))
        {
            return "9";
        }
        else if (word.equals("eight"))
        {
            return "8";
        }
        else if (word.equals("seven"))
        {
            return "7";
        }
        else if (word.equals("six"))
        {
            return "6";
        }
        else if (word.equals("five"))
        {
            return "5";
        }
        else if (word.equals("four"))
        {
            return "4";
        }
        else if (word.equals("three"))
        {
            return "3";
        }
        else if (word.equals("two"))
        {
            return "2";
        }
        else if (word.equals("one"))
        {
            return "1";
        }
        else if (word.equals("zero"))
        {
            return "0";
        }

        if (word.length() < 4)
        {
            return word;
        }

        for (int i = 1; i < word.length() + 1; i++)
        {
            if (i != 1)
            {
                if (word.charAt(i - 1) == 'a' || word.charAt(i - 1) == 'e' || word.charAt(i - 1) == 'i' || word.charAt(i - 1) == 'o' || word.charAt(i - 1 ) == 'u')
                {
                    continue;
                }
            }
            
            if (i != word.length())
            {
                if (word.charAt(i) == word.charAt(i - 1))
                {
                    continue;
                }
            }

            output += word.charAt(i - 1);
        }
    

        return output;
    }
}