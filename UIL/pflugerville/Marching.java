import java.io.*;
import java.util.*;

public class Marching {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("marching.dat"));
        int n = test.nextInt();

        for (int i = 0; i < n; i++)
        {
            int y = test.nextInt();
            int x = test.nextInt();

            char[][] map = new char[y + 1][x + 1];

            for (int j = 0; j <= y; j++)
            {
                map[j] = test.nextLine().toCharArray();
            }

            System.out.println(Arrays.toString(map));
        }
    }  
}