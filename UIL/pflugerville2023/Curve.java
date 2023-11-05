import java.io.*;
import java.util.*;

public class Curve {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("curve.dat"));
        
        while (test.hasNextInt())
        {
            int curveNum = test.nextInt();
            int startNum = test.nextInt();

            for (int i = 0; i < curveNum; i++)
            {
                for (int j = startNum; j > 0; j /= 2)
                {
                    String line = "";
                    for (int k = 0; k < j; k++)
                    {
                        line += "*";
                    }
                    System.out.println(line);
                }
                startNum -= 5;
            }
            System.out.println("");
        }
        
    }  
}