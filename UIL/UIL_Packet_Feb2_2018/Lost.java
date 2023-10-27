import java.io.*;
import java.util.*;

public class Lost {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("lost.dat"));
        int n = test.nextInt();
        test.nextLine();

        for (int i = 0; i < n; i++)
        {
            int x = test.nextInt();
            int y = test.nextInt();
            int startX = 0, startY = 0;

            test.nextLine();

            String[][] maze = new String[x][y];

            for (int j = 0; j < x; j++)
            {
                String curr = test.nextLine();
                for (int k = 0; k < y; k++)
                {
                    if (curr.charAt(k) == 'S')
                    {
                        startX = j;
                        startY = k;
                    }
                    maze[j][k] = curr.charAt(k) + "";
                }
            }

            System.out.println(dfs(startX, startY, 0, maze));
        }        
    }

    public static int dfs(int x, int y, int steps, String[][] maze)
    {
        if ((x >= 0 && x < maze.length) && (y >= 0 && y < maze[0].length))
        {
            if (maze[x][y].equals("E"))
            {
                return steps;
            }
            else if (maze[x][y].equals(".") || maze[x][y].equals("S"))
            {
                maze[x][y] = "#";
                int top = dfs(x + 1, y, steps + 1, maze);
                int bottom = dfs(x - 1, y, steps + 1, maze);
                int left = dfs(x, y - 1, steps + 1, maze);
                int right = dfs(x, y + 1, steps + 1, maze);
                maze[x][y] = ".";

                return Math.min(Math.min(Math.min(top, bottom), left), right);
            }
        }

        return Integer.MAX_VALUE;
    }
}