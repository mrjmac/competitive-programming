import java.util.Scanner;

public class permutations {
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        int num = scanner.nextInt();

        if (num == 3 || num == 2)
        {
            System.out.println("NO SOLUTION");
        }
        else
        {
            for (int i = 2; i <= num; i += 2)
            {
                System.out.print(i + " ");
            }

            for (int i = 1; i <= num; i += 2)
            {
                System.out.print(i + " ");
            }
        }

        scanner.close();
    }
}
