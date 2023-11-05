import java.io.*;
import java.util.*;

public class Scrambled {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("scrambled.dat"));
        
        while (test.hasNext())
        {
            String curr = test.nextLine();
            String[] values = curr.split(" ");

            LinkedList<Integer> nums = new LinkedList<>();
            Stack<String> ops = new Stack<>();

            for (String s  : values)
            {
                if (isNum(s))
                {
                    nums.add(Integer.parseInt(s));
                }
                else
                {
                    ops.push(s);
                }
            }

            while (!ops.isEmpty())
            {
                int num1 = nums.poll();
                int num2 = nums.poll();

                String op = ops.pop();

                int result = 1;
                if (op.equals("+"))
                {
                    result = num1 + num2;
                }
                else
                {
                    result = num1 - num2;
                }

                nums.addFirst(result);
            }

            System.out.println(nums.poll());
        }
        
    }

    public static boolean isNum(String s)
    {
        int value = s.charAt(0);
        return value >= 48 && value <= 57;
    }
}