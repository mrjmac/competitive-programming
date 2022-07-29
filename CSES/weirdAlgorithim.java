import java.util.*;

public class weirdAlgorithim {
    public static void main(String args[])
    {
        Scanner input = new Scanner(System.in);
        long a = input.nextLong();
        String output = a + " ";
        while (a != 1)
        {
            if (a % 2 == 0)
            {
                a /= 2;
            }
            else 
            {
                a = (a * 3) + 1;
            }
            output += a + " ";
        }
        System.out.println(output);

        input.close();
    }
}