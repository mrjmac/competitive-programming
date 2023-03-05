import java.io.*;
import java.util.*;

public class Vigenere {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("vigenere.dat"));

        int n = test.nextInt();
        test.nextLine();

        for(int i = 0; i < n; i++)
        {
            String curr = test.nextLine();
            ArrayList<Character> sort = new ArrayList<>();

            for (int j = 0; j < curr.length(); j++)
            {
                sort.add(curr.charAt(j));
            }
            Collections.sort(sort);
            for (char c : sort)
            {
                System.out.print(c);
            }
            System.out.println();
        }

        
    }
}