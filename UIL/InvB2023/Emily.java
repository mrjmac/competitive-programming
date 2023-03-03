import java.io.*;
import java.util.Scanner;

public class Emily {
    public static void main(String args[]) throws IOException
    {
        Scanner a = new Scanner(new File("emily.dat"));
        int n = a.nextInt();

        for (int i = 0; i < n; i++)
        {
            int first = a.nextInt();
            String val = a.next();
            int second = a.nextInt();

            if (val.equals("+"))
            {
                System.out.println(first + " + " + second + " = " + (first + second));
            }
            else if (val.equals("-"))
            {
                System.out.println(first + " - " + second + " = " + (first - second));
            }
            else if (val.equals("X") || val.equals("x") || val.equals("*"))
            {
                System.out.println(first + " " + val + " " + second + " = " + first * second);
            }
            else if (val.equals("/"))
            {
                System.out.println(first + " / " + second + " = " + (first / second) + " remainder " + first % second);
            }
        }
        
    }
}