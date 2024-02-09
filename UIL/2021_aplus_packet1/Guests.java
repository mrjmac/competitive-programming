import java.io.*;
import java.util.*;

public class Guests {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("guests.dat"));
        int n = test.nextInt();
        test.nextLine();

        for (int i = 0; i < n; i++)
        {
            String word = test.nextLine();
            System.out.println(sort(word));
        }
    }
    
    public static String sort(String unsorted)
    {
        ArrayList<Character> test = new ArrayList<>();

        for (int i = 0; i < unsorted.length(); i++)
        {
            test.add(unsorted.charAt(i));
        }

        Collections.sort(test);
        String ans = "";

        for (int i = 0; i < unsorted.length(); i++)
        {
            ans += test.get(i);
        }

        return ans;
    }
}