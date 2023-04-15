import java.io.*;
import java.util.*;

import javax.lang.model.util.ElementScanner14;

public class Catherine {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("catherine.dat"));
        int n = test.nextInt();
        for (int i = 0; i < n; i++)
        {
            char[] target = test.next().toCharArray();
            char[] guess = test.next().toCharArray();
            ArrayList<Character> real = new ArrayList<Character>();
            ArrayList<Character> trys = new ArrayList<Character>();
            for (int j = 0; j < 5;j++)
            {
                trys.add(guess[j]);
                real.add(target[j]);
            }
            String[] response  = new String[5];
            String ans;
            for (int j = 0; j < 5; j++)
            {
                if (trys.get(j) == real.get(j))
                {
                    ans = "" + trys.get(j);
                    response[j] = ans.toUpperCase();
                }
                else if (real.contains(trys.get(j)))
                {
                    response[j] = "" + trys.get(j);
                }
                else {
                    response[j] = "*";
                }
            }
            for (int j = 0; j < 5; j++)
            {
                System.out.print(response[j]);
            }
            System.out.println();
        }

        
    }  
}