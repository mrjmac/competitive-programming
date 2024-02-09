import java.io.*;
import java.util.*;

public class Talk {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("talk.dat"));
        int n = test.nextInt();
        test.nextLine();
        HashMap<String, String> h = new HashMap<>();
        h.put("Alpha", "A");
        h.put("Bravo", "B");
        h.put("Charlie", "C");
        h.put("Delta", "D");
        h.put("Echo", "E");
        h.put("Foxtrot", "F");
        h.put("Golf", "G");
        h.put("Hotel", "H");
        h.put("India", "I");
        h.put("Juliet", "J");
        h.put("Kilo", "K");
        h.put("Lima", "L");
        h.put("Mike", "M");
        h.put("November", "N");
        h.put("Oscar", "O");
        h.put("Papa", "P");
        h.put("Quebec", "Q");
        h.put("Rome", "R");
        h.put("Sierra", "S");
        h.put("Tango", "T");
        h.put("Uniform", "U");
        h.put("Victor", "V");
        h.put("Whiskey", "W");
        h.put("Xray", "X");
        h.put("Yankee", "Y");
        h.put("Zulu", "Z");
        h.put("Blank", " ");
        h.put("Chameleon", ",");
       

        for (int i = 0; i < n; i ++)
        {
            int x = test.nextInt();
            int y = test.nextInt();
            test.nextLine();
            String[] s = test.nextLine().split(" ");

            for (int j = 0; j < s.length; j++)
            {
                for (String key : h.keySet())
                {
                    if (s[j].equals(key))
                    {
                        s[j] = h.get(key);
                    }
                }
            }
            String output = "";
            for (int j = y; j < s.length; j++)
            {
                output += s[j];
            }
            for (int j = 0; j < y; j++)
            {
                output += s[j];
            }
            System.out.println(output);

        }

        
    }  
}