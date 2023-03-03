import java.io.*;
import java.util.*;

public class Rishita {
    public static void main(String args[]) throws IOException
    {
        Scanner a = new Scanner(new File("rishita.dat"));
        TreeMap<String, TreeMap<String, String>> map = new TreeMap<String, TreeMap<String, String>>();
        while (a.hasNextLine())
        {
            String line = a.nextLine();
            Scanner b = new Scanner(line);
            b.useDelimiter(",");
            String course = b.next();
            String id = b.next();
            String college = b.next();

            if (map.get(college) == null)
            {
                TreeMap<String, String> curr = new TreeMap<String, String>();
                curr.put(id, course);
                map.put(college, curr);
            }
            else
            {
                TreeMap<String, String> m = map.get(college);
                m.put(id, course);
                map.put(college, m);
            }
        }

        Set keys = map.keySet();
        for (Object key : keys)
        {
            System.out.println(key);
            Set keys2 = map.get(key).keySet();
            for (Object key2 : keys2)
            {
                System.out.println("   " + key2 + "   " + map.get(key).get(key2));
            }
        }
    }  
}
