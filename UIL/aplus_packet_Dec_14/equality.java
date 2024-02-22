import java.io.*;
import java.util.*;

public class equality {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("equality.dat"));
        
        while (test.hasNextInt())
        {
            int start = test.nextInt();
			int step = test.nextInt();
			int z = start;

			for(int x = 0;x < 5;x++)
			{
				Integer a = z;
				Integer b = z;
				System.out.printf("%+4d == %+4d is %s\n",a,b,(a==b));
				z+=step;
			}
            
		    System.out.println();
        }
    }  
    
}