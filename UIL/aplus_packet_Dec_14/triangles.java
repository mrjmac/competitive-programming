import java.io.*;
import java.util.*;

public class triangles {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("triangles.dat"));
        
        int[] p1 = new int[2];
        int[] p2 = new int[2];
        int[] p3 = new int[2];

        while(test.hasNextLine())
        {
            String line = test.nextLine();
            String[] coords = line.split(" ");
            p1[0] = Integer.parseInt(coords[0]);
            p1[1] = Integer.parseInt(coords[1]);
            p2[0] = Integer.parseInt(coords[2]);
            p2[1] = Integer.parseInt(coords[3]);
            p3[0] = Integer.parseInt(coords[4]);
            p3[1] = Integer.parseInt(coords[5]);

            double d12 = Math.sqrt(Math.pow(p1[0] - p2[0], 2) + Math.pow(p1[1] - p2[1], 2));
            double d13 = Math.sqrt(Math.pow(p1[0] - p3[0], 2) + Math.pow(p1[1] - p3[1], 2));
            double d23 = Math.sqrt(Math.pow(p2[0] - p3[0], 2) + Math.pow(p2[1] - p3[1], 2));

            double perimeter = d12 + d13 + d23;
            double s = perimeter / 2;
            double area = Math.sqrt(s * (s - d12) * (s - d13) * (s - d23));

            System.out.println((int) area + " " + (int) perimeter);
        }
    }  
}