import java.io.*;
import java.util.*;

public class Thankyou {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("thankyou.dat"));
        int n = test.nextInt();
        test.next();

        for (int i = 0; i < n; i++)
        {
            System.out.println("Thank You " + test.nextLine());
        }

        
    }  
}