import java.io.*;
import java.util.*;

public class Archimedes {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("archimedes.dat"));
        
        while (test.hasNext())
        {
            double radius = Double.parseDouble(test.next());
            double cVol = Math.pow(radius, 3) * Math.PI * 2;
            double sVol = (4.0 / 3.0) * (Math.PI) * (Math.pow(radius, 3));

            System.out.print("Radius = " + radius + ", ");
            System.out.printf("Sphere Vol = %.2f, Cylinder Vol = %.2f", sVol, cVol);
            System.out.println("");
        }

        
    }  
}