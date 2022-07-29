import java.util.*;

public class missingNumber {
    public static void main(String args[])
    {
        Scanner input = new Scanner(System.in);
        long a = input.nextInt();
        long total = (a * (a + 1))/2;
        long incom = 0;

        while (input.hasNext())
        {
            incom += input.nextInt();
        }

        System.out.println((total - incom));

        input.close();
    }
}