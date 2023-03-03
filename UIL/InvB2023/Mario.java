import java.io.*;
import java.util.*;

public class Mario {
    public static void main(String args[]) throws IOException
    {
        Scanner a = new Scanner(new File("mario.dat"));
        int n = a.nextInt();
        a.nextLine();

        for (int i = 0; i < n; i++)
        {
            int letters = a.nextInt();
            String s = a.next();
            if (letters > s.length())
            {
                System.out.println("error");
            }
            else if (letters > s.length() / 2)
            {
                System.out.println(reverse(s));
            }
            else
            {
                String first = s.substring(0, letters);
                String last = s.substring(s.length()- letters);
                String middle = s.substring(letters, s.length() - letters);
                System.out.println(reverse(last) + middle + reverse(first));
            }
        }   
    }

    public static String reverse(String s)
    {
        String r = "";
        for (int i = s.length() - 1; i >= 0; i--)
        {
            r += s.charAt(i);
        }
        return r;
    }
    
}
