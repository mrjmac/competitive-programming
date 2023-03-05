import java.io.*;
import java.util.*;

public class Ultimate {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("ultimate.dat"));

        int n = test.nextInt();
        test.nextLine();
        String[] buttons = {"LEFT", "LEFT", "A", "RIGHT", "LEFT", "RIGHT", "DOWN", "A", "B", "RIGHT", "UP"};

        for (int i = 0; i < n; i++)
        {
            Scanner line = new Scanner(test.nextLine());
            String[] inputs = line.nextLine().split(" ");
            int count = 0, correct = 0;
            for (int j = 0; j < inputs.length; j++)
            {
                count += 1;
                if (j <= 10 && inputs[j].equals(buttons[j]))
                {
                    correct += 1;
                }
            }
            count = Math.max(count, 11);
            double answer = ((double)(correct) / count) * 100;
            System.out.println(String.format("%.2f", answer) + "%");
        }

    }
}