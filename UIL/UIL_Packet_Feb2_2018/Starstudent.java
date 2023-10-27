import java.io.*;
import java.util.*;

public class Starstudent {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("star.dat"));
        int n = test.nextInt();
        test.nextLine();

        for (int i = 0; i < n; i++)
        {
            int students = test.nextInt();

            String starStudent = "";
            int maxScore = -1;

            for (int j = 0; j < students; j++)
            {
                test.nextLine();
                
                String name = test.next();
                int score = test.nextInt();

                if (score > maxScore)
                {
                    starStudent = name;
                    maxScore = score;
                }
            }
            System.out.println(starStudent);
        }

        
    }  
}