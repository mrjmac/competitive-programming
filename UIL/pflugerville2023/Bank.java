import java.io.*;
import java.util.*;

public class Bank {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("bank.dat"));
        int n = test.nextInt();
        test.nextLine();

        for (int i = 0; i < n; i++)
        {
            String line = test.nextLine();
            int opps = Integer.parseInt(test.nextLine());

            for(int j = 0; j < opps; j++)
            {
                String opLine = test.nextLine();
                Scanner opScan = new Scanner(opLine);
                String operator = opScan.next();
                int index = Integer.parseInt(opScan.next());
                index -= 1;

                if (operator.equals("SEARCH"))
                {
                    String charLook = opScan.next();
                    System.out.println(line.indexOf(charLook, index) + 1);
                }
                else if (operator.equals("REPLACE"))
                {
                    String charRep = opScan.next();
                    String newLine = line.substring(0, index) + charRep + line.substring(index + 1);
                    System.out.println(newLine);
                }
                else if (operator.equals("DELETE"))
                {
                    int del = Integer.parseInt(opScan.next());
                    String newLine = line.substring(0, index) + line.substring(index + del);
                    System.out.println(newLine);
                }
                else if (operator.equals("INSERT"))
                {
                    int grabInd = opLine.indexOf(index + "") + (index + " ").length();
                    String insert = "";
                    while(opScan.hasNext()){
                        insert += opScan.next() + " ";
                    }

                    //insert = insert.substring(0, insert.length() - 1);

                    String newLine = line.substring(0, index)  + insert + line.substring(index);
                    System.out.println(newLine);
                }
            }
        }

        
    }  
}