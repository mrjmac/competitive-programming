import java.io.*;
import java.util.*;

public class Backstory {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("backstory.dat"));

        int cases = test.nextInt();
        test.nextLine();

        for (int i = 0; i < cases; i++)
        {
            String relevance = test.nextLine();
            Scanner d = new Scanner(relevance);

            d.useDelimiter("/");
            double date = ((d.nextInt()-1) * 31 + d.nextInt())/(12.0*31);
            double date2 = d.nextInt() + date;
            int times = test.nextInt();
            d.close();
            test.nextLine();

            TreeMap<Double, String> map = new TreeMap<>();

            for (int j = 0; j < times; j++)
            {
                String day = test.nextLine();
                Scanner f = new Scanner(day);
                f.useDelimiter("/");

                double event = ((f.nextInt()-1) * 31 + f.nextInt())/(12.0*31);
                double event2 = f.nextInt() + event;
                f.close();
                if (event2 < date2)
                {
                    map.put(event2, day);
                }
            }

            for (double k : map.keySet())
            {
                System.out.println(map.get(k));
            }
            if (i != cases - 1)
                System.out.println();   
        }
    }
}