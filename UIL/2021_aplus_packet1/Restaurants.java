import java.io.*;
import java.util.*;

public class Restaurants {
    public static void main(String args[]) throws IOException
    {
        Scanner c = new Scanner(new File("restaurants.dat"));
        int t = c.nextInt();

        String[] finalAns = new String[t];
        for(int test = 0; test < t; test++)
        {
            int maxIndex = 0;
            double max = 0;
            
            int N = c.nextInt();
            c.nextLine();
            String[] answers = new String[N];
            for(int i = 0; i < N; i++)
            {
                String s = c.nextLine();
                String[] p = s.split("\\-");
                String ans = p[0];
                if(i == 0) max = Double.parseDouble(p[1]);
                double check = Double.parseDouble(p[1]);
                if(check <= 10)
                {
                    ans += "-$";
                }
                else if(check <= 20)
                {
                    ans += "-$$";
                }
                else if(check <= 30)
                {
                    ans += "-$$$";
                }
                else
                {
                    ans += "-$$$$";
                }
                if(max < check)
                {
                    max = check;
                    maxIndex = i;
                }
                answers[i] = ans;
            }

            answers[maxIndex] += " Best Value!";

            String place = "";
            for(int i = 0; i < answers.length; i++)
            {
                place += answers[i];
                if(i != N - 1)
                {
                    place += "\n";
                }
            }

            finalAns[test] = place;
        }

        for(int i = 0; i < t; i++)
        {
            System.out.println(finalAns[i]);
        }
    }  
}