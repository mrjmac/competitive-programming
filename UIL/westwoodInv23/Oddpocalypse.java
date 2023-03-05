import java.io.*;
import java.util.*;

public class Oddpocalypse {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("oddpocalypse.dat"));

        while (test.hasNext())
        {
            int curr = test.nextInt();
            if (curr % 2 != 0)
            {
                System.out.println(curr);
            }
        }
    }
}