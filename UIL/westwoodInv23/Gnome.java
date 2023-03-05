import java.io.*;
import java.util.*;

public class Gnome {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("gnome.dat"));

        int n = test.nextInt();

        for (int i = 0; i < n; i++)
        {
            int height = test.nextInt(), ans = 0;
            test.nextLine();
            String line = test.nextLine();

            char[][] map = new char[height][line.length()];
            map[0] = line.toCharArray();

            for (int j = 1; j < height; j++)
            {
                map[j] = test.nextLine().toCharArray();
            }
            
            for (int j = map.length - 1; j >= 0; j--)
            {
                for (int k = map[0].length - 1; k >= 0; k--)
                {
                    if (map[j][k] == 'g')
                    {
                        ans += 1;
                        dfs(j, k, map);
                    }
                }
            }
            System.out.println(ans);
        }
        
    }
    
    public static void dfs(int x, int y, char[][] map)
    {
        if (x >= 0 && x < map.length && y >= 0 && y < map[x].length)
        {
            if (map[x][y] == 'g')
            {
                map[x][y] = '.';
                dfs(x, y - 1, map);
                dfs(x - 1, y, map);
                dfs(x, y + 1, map);
            }
        }
    }
}