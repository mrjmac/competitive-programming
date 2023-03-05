import java.io.*;
import java.util.*;

public class Diem {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("diem.dat"));
        
        int n = test.nextInt();

        for (int i = 0; i < n; i++)
        {
            int a = test.nextInt(), b =  test.nextInt();

            System.out.println(a + b);
        }

        
    }
}