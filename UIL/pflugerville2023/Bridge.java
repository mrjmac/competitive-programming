import java.io.*;
import java.util.*;

public class Bridge {
    public static void main(String args[]) throws IOException
    {
        Scanner test = new Scanner(new File("bridge.dat"));
        int n = test.nextInt();
        test.nextLine();

        for (int i = 0; i < n; i++)
        {
            int total = 0;
            ArrayList<String> clubs = new ArrayList<>();
            ArrayList<String> hearts = new ArrayList<>();
            ArrayList<String> diamonds = new ArrayList<>();
            ArrayList<String> spades = new ArrayList<>();

            String hand = test.nextLine();

            for (int j = 0; j < 20; j += 2)
            {
                String card = hand.charAt(j) + "";
                String suit = hand.charAt(j + 1) + "";

                if (suit.equals("S"))
                {
                    spades.add(card);
                }
                if (suit.equals("C"))
                {
                    clubs.add(card);
                }
                if (suit.equals("D"))
                {
                    diamonds.add(card);
                }
                if (suit.equals("H"))
                {
                    hearts.add(card);
                }

                if (card.equals("A"))
                {
                    total += 4;
                }
                if (card.equals("K"))
                {
                    total += 3;
                }
                if (card.equals("Q"))
                {
                    total += 2;
                }
                if (card.equals("J"))
                {
                    total += 1;
                }
            }

            if (clubs.size() == 0)
            {
                total += 3;
            }
            if (clubs.size() == 1)
            {
                total += 2;
            }
            if (clubs.size() == 2)
            {
                total += 1;
            }

            if (diamonds.size() == 0)
            {
                total += 3;
            }
            if (diamonds.size() == 1)
            {
                total += 2;
            }
            if (diamonds.size() == 2)
            {
                total += 1;
            }

            if (hearts.size() == 0)
            {
                total += 3;
            }
            if (hearts.size() == 1)
            {
                total += 2;
            }
            if (hearts.size() == 2)
            {
                total += 1;
            }

            if (spades.size() == 0)
            {
                total += 3;
            }
            if (spades.size() == 1)
            {
                total += 2;
            }
            if (spades.size() == 2)
            {
                total += 1;
            }

            if (clubs.contains("A") && diamonds.contains("A") && hearts.contains("A") && spades.contains("A"))
            {
                total += 1;
            }

            System.out.println("BRIDGE POINTS = " + total);

        }
    }  
}