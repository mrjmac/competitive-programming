import java.io.*;
import java.util.*;

public class Lautaro {
    public static void main(String args[]) throws IOException
    {
        Scanner a = new Scanner(new File("lautaro.dat"));
        int n = a.nextInt();
        a.nextLine();

        for (int i = 0; i < n; i++)
        {
            String line = a.nextLine();
            if (line.length() != 14)
            {
                System.out.println("No Calls for You.");
            }
            else if(line.charAt(0) != '(')
            {
                System.out.println("No Calls for You.");
            }
            else if(!isNum(line.charAt(1)))
            {
                System.out.println("No Calls for You.");
            }
            else if(!isNum(line.charAt(2)))
            {
                System.out.println("No Calls for You.");
            }
            else if(!isNum(line.charAt(3)))
            {
                System.out.println("No Calls for You.");
            }
            else if(line.charAt(4) != ')')
            {
                System.out.println("No Calls for You.");
            }
            else if(line.charAt(5) != ' ')
            {
                System.out.println("No Calls for You.");
            }
            else if(!isNum(line.charAt(6)))
            {
                System.out.println("No Calls for You.");
            }
            else if(!isNum(line.charAt(7)))
            {
                System.out.println("No Calls for You.");
            }
            else if(!isNum(line.charAt(8)))
            {
                System.out.println("No Calls for You.");
            }
            else if(line.charAt(9) != '-')
            {
                System.out.println("No Calls for You.");
            }
            else if(!isNum(line.charAt(10)))
            {
                System.out.println("No Calls for You.");
            }
            else if(!isNum(line.charAt(11)))
            {
                System.out.println("No Calls for You.");
            }
            else if(!isNum(line.charAt(12)))
            {
                System.out.println("No Calls for You.");
            }
            else if(!isNum(line.charAt(13)))
            {
                System.out.println("No Calls for You.");
            }
            else
            {
                System.out.println("Valid Phone Number.");
            }
        }   
    }

    public static boolean isNum(char c)
    {
        if (c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9')
        {
            return true;
        }
        return false;
    }
    
}
