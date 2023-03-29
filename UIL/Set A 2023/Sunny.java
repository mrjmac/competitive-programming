import java.io.*;
import java.util.*;

public class Sunny {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("sunny.dat"));
        ArrayList<String> names = new ArrayList<>();

        while (test.hasNext())
        {
            String first = test.next();
            String second = test.nextLine();

            String real = second.substring(1) + " (" + first + ")";
            names.add(real);           
        }

        Collections.sort(names);

        for (int i = 0; i < names.size(); i++)
        {
            System.out.println(names.get(i));
        }

    }
}
