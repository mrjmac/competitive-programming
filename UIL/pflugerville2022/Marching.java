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
            test.nextLine();

            int ans = 0;

            char[][] map = new char[y][x];
            int[][] music = new int[26][2];

            for (int j = 0; j < y; j++)
            {
                String curr = test.nextLine();
                for (int k = 0; k < x; k++)
                {
                    char currChar = curr.charAt(k);
                    if (currChar >= 'a' && currChar <= 'z')
                    {
                        music[currChar - 'a'][0] = j;
                        music[currChar - 'a'][1] = k;
                    }
                    map[j][k] = currChar;
                }
            }

            for (int j = 0; j < y; j++)
            {
                for (int k = 0; k < x; k++)
                {
                    char currChar = map[j][k];
                    if (currChar >= 'A' && currChar <= 'Z')
                    {
                        int targetY = music[currChar - 'A'][0];
                        int targetX = music[currChar - 'A'][1];

                        Queue<Integer> bfs = new LinkedList<>();
                        bfs.add(j);
                        bfs.add(k);
                        bfs.add(0);

                        char[][] copy = new char[y][x];

                        for (int z = 0; z < y; z++)
                        {
                            for (int l = 0; l < x; l++)
                            {
                                copy[z][l] = map[z][l];
                            }
                        }
                        
                        while (!bfs.isEmpty())
                        {
                            int currY = bfs.poll();
                            int currX = bfs.poll();
                            int steps = bfs.poll();

                            if (currX >= 0 && currX < x && currY >= 0 && currY < y && copy[currY][currX] != '#')
                            {
                                if (currX == targetX && currY == targetY)
                                {
                                    ans += steps;
                                    break;
                                }
                                copy[currY][currX] = '#';

                                bfs.add(currY - 1);
                                bfs.add(currX);
                                bfs.add(steps + 1);

                                bfs.add(currY + 1);
                                bfs.add(currX);
                                bfs.add(steps + 1);

                                bfs.add(currY);
                                bfs.add(currX - 1);
                                bfs.add(steps + 1);

                                bfs.add(currY);
                                bfs.add(currX + 1);
                                bfs.add(steps + 1);
                            }
                        }
                    }
                }
            }

            System.out.println(ans);
        }
    }  
}