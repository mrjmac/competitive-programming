import java.io.*;
import java.util.*;

public class Cards {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("cards.dat"));
        int n = test.nextInt();
        test.nextLine();

        for (int i = 0; i < n; i++)
        {
            String curr = test.nextLine();
            int cards = 0;
            for (int j = 0; j < curr.length(); j++)
            {
                if (isNum(curr.charAt(j)))
                {
                    cards++;
                }
            }
            System.out.println(52 - cards);
        }

        
    }  

    public static boolean isNum(char a)
    {
        if (a >= 65 && a <= 90)
        {
            return true;
        }
        else if (a >= 97 && a <= 122)
        {
            return true;
        }
        return false;
    }
}
