import java.io.*;
import java.util.*;

public class Three {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("three.dat"));

        int n = test.nextInt();
        test.nextLine();

        for (int i = 0; i < n; i++)
        {
            
            int first = note(test.next());
            int second = note(test.next());
            int third = note(test.next());
            
            if (first > second)
            {
                second += 12;
            }
            if (second > third)
            {
                third += 12;
                if (second > third)
                {
                    third += 12;
                }
            }


            
            int distance1 = third - second;
            int distance2 = second - first;

            int distance3 = third - first;
            distance3 = distance3 % 12;

            
            if (distance1 == distance2 && distance1== 0){
                System.out.println("Girls do what we like");
            }

            else if (distance1 == 0 || distance1 == 3 || distance1 == 4 || distance1 == 5 || distance1 == 7 || distance1 == 8 || distance1 == 9)
            {
                if (distance2 == 0 || distance2 == 3 || distance2 == 4 || distance2 == 5 || distance2 == 7 || distance2 == 8 || distance2 == 9)
                {
                    if (distance3 == 0 || distance3 == 3 || distance3 == 4 || distance3 == 5 || distance3 == 7 || distance3 == 8 || distance3 == 9)
                    {
                        System.out.println("Girls do what we like");

                    }
                    else{
                        System.out.println("AHHHHHHH");
                    }

                }
                else{
                    System.out.println("AHHHHHHH");
                }
            }
            else 
                System.out.println("AHHHHHHH");
            
            
        }

        
    }

    public static int note(String n)
    {
        if (n.equals("A"))
        {
            return 1;
        }
        else if (n.equals("A#") || n.equals("Bb"))
        {
            return 2;
        }
        else if (n.equals("B") || n.equals("Cb"))
        {
            return 3;
        }
        else if (n.equals("C") || n.equals("B#"))
        {
            return 4;
        }
        else if (n.equals("C#") || n.equals("Db"))
        {
            return 5;
        }
        else if (n.equals("D"))
        {
            return 6;
        }
        else if (n.equals("D#") || n.equals("Eb"))
        {
            return 7;
        }
        else if (n.equals("E") || n.equals("Fb"))
        {
            return 8;
        }
        else if (n.equals("F") || n.equals("E#"))
        {
            return 9;
        }
        else if (n.equals("F#") || n.equals("Gb"))
        {
            return 10;
        }
        else if (n.equals("G"))
        {
            return 11;
        }
        else if (n.equals("G#") || n.equals("Ab"))
        {
            return 12;
        }
        return 0;
    }
}