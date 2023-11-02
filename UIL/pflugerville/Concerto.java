import java.io.*;
import java.util.*;

public class Concerto {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("concerto.dat"));
        int n = test.nextInt();
        test.nextLine();

        for (int i = 0; i < n; i++)
        {
            String line = test.nextLine();
            int count = 0;
            int ind = line.indexOf("minor");

            while (ind != -1)
            {
                count++;
                ind = line.indexOf("minor", ind + 1);
            }

            if (count > 2)
            {
                System.out.println("It's over Vee Valdee! I have the high ground!");
            }
            else
            {
                System.out.println("You underestimate my music!");
            }
        }

        
    }  
}