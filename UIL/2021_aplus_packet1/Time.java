import java.io.*;
import java.util.*;

public class Time {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("time.dat"));
        int n = test.nextInt();
        test.nextLine();
        for (int i = 0; i < n; i++)
        {
            String[] s = test.nextLine().split(":");
            System.out.println(Integer.parseInt(s[0].strip()) + Integer.parseInt(s[1].strip()));
        }

        
    }  
}