import java.io.*;
import java.util.*;

public class DryRun {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("dryrun.dat"));
        int n = test.nextInt();
        test.nextLine();

        for (int i = 0; i < n; i++)
        {
            System.out.println("I like " + test.nextLine() + ".");
        }
    }  
}