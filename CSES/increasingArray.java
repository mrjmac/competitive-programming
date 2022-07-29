import java.util.*;

public class increasingArray {
    public static void main(String args[])
    {
        Scanner input = new Scanner(System.in);
        int test = input.nextInt();
        long moves = 0;
        //code added so vscode stops yelling at me
        moves += test;
        moves -= test;
        //done
        int last = input.nextInt();
        int curr = 0;

        while (input.hasNextInt())
        {
            curr = input.nextInt();
            if (curr < last)
            {
                moves += last - curr;
                curr = last;
            }
            last = curr;
        }
        System.out.println(moves);

        input.close();
    }
}
