import java.io.*;
import java.util.*;

public class Piano {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("piano.dat"));
        int n = test.nextInt();
        test.nextLine();

        TreeMap<String, String> corrections = new TreeMap<>();
        corrections.put("A Flat", "G Sharp");
        corrections.put("B Flat", "A Sharp");
        corrections.put("C Flat", "B Sharp");
        corrections.put("D Flat", "C Sharp");
        corrections.put("E Flat", "G Sharp");
        corrections.put("A Sharp", "B Flat");
        corrections.put("B Sharp", "C Flat");
        corrections.put("C Sharp", "D Flat");
        corrections.put("D Sharp", "E Flat");
        corrections.put("E Sharp", "F Flat");

        for (int i = 0; i < n; i++)
        {
            System.out.println(corrections.get(test.nextLine()));
        }
    }  
}