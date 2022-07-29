import java.util.*;

public class repetitions {
    public static void main(String args[])
    {
        Scanner input = new Scanner(System.in);
        String test = input.next();
        int max = 1;
        int count = 1;

        for (int j = 2; j <= test.length(); j++)
        {
            if(test.substring(j - 1, j).equals(test.substring(j - 2, j - 1)))
            {
                count += 1;
                if (count > max)
                {
                    max = count;
                }
                
            }
            else
            {
                count = 1;
            }
        }
        System.out.println(max);

        input.close();
    }
}
