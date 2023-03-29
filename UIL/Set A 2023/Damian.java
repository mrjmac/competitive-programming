import java.io.*;
import java.util.*;

public class Damian {
    public static void main(String args[]) throws IOException
    {

        Scanner a = new Scanner(new File("damian.dat"));

        int times = a.nextInt();

        

        for (int i = 0; i < times; i++)
        {
            int num = a.nextInt();
            for (int j = 1; j < num; j++)
            {
                if (num % j == 0)
                {
                    if (j == 1)
                    {
                        System.out.print("1");
                    }
                    else if (isGrowing(j))
                    {
                        System.out.print(" " + j);
                    }
                }
            }
            if (num == 1)
            {
                System.out.print(1);
            }
            System.out.println();
        }
        
    }

    public static boolean isGrowing(int n)
    {
        String number = "" + n;
        String[] num = number.split("");

        int prev = Integer.MIN_VALUE;

        for (String i : num)
        {
            int a = Integer.parseInt(i);
            if (!(a > prev))
            {
                return false;
            }
            prev = a;
        }
        return true;
    }
}