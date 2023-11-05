import java.io.*;
import java.util.*;

public class UILingo {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("uilingo.dat"));
        int n = test.nextInt();

        for (int i = 0; i < n; i++)
        {
            int[][] board = new int[4][4];
            
            for (int j = 0; j < 4; j++)
            {
                for (int k = 0; k < 4; k++)
                {
                    board[j][k] = test.nextInt(); 
                }
            }

            int num = test.nextInt();
            for (int j = 0; j < num; j++)
            {
                //System.out.println(j);
                //System.out.println(num);
                int[][] copy = new int[4][4];
                for (int z = 0; z < 4; z++)
                {
                    for (int k = 0; k < 4; k++)
                    {
                        copy[z][k] = board[z][k];
                    }
                }

                for (int k = 0; k < 10; k++)
                {
                    int curr = test.nextInt();
                    for (int z = 0; z < 4; z++)
                    {
                        for (int y = 0; y < 4; y++)
                        {
                            if (copy[z][y] == curr)
                            {
                                copy[z][y] = -1;
                            }
                        }
                    }
                }

                int ans = 0;

                if (copy[0][0] == -1 && copy[0][3] == -1 && copy[3][3] == -1 && copy[3][0] == -1)
                {
                    //System.out.println("+5");
                    ans += 5;
                }
                
                for (int k = 0; k < 4; k++)
                {
                    if (copy[k][0] == -1 && copy[k][1] == -1 && copy[k][2] == -1 && copy[k][3] == -1)
                    {
                        //System.out.println("+10");
                        ans += 10;
                    }
                }

                for (int k = 0; k < 4; k++)
                {
                    if (copy[0][k] == -1 && copy[1][k] == -1 && copy[2][k] == -1 && copy[3][k] == -1)
                    {
                        //System.out.println("+15");
                        ans += 15;
                    }
                }

                if (copy[0][0] == -1 && copy[1][1] == -1 && copy[3][3] == -1 && copy[2][2] == -1)
                {
                    //System.out.println("+20");
                    ans += 20;
                }

                if (copy[3][0] == -1 && copy[0][3] == -1 && copy[1][2] == -1 && copy[2][1] == -1)
                {
                    //System.out.println("+20");
                    ans += 20;
                }
                
                System.out.println(ans);

            }
        }

        
    }  
}