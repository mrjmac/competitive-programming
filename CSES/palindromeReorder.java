import java.io.*;
import java.util.StringTokenizer;
//ignore old java code
public class palindromeReorder {
    public static void main(String[] args) throws IOException
    {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter pw = new PrintWriter(System.out);
        StringTokenizer st = new StringTokenizer(r.readLine());

        String a = st.nextToken();
        StringBuilder s = new StringBuilder();
        int[] freq = new int[26];
        int oddCount = 0;
        int oddInd = 100;
        String front = "";

        s.append(a);
        if (s.reverse().equals(a))
        {
            pw.println(a);
        }
        else
        {
           for (int i = 0; i < a.length(); i++)
           {
                freq[a.charAt(i) - 65] += 1;
           }

           for (int i = 0 ; i < freq.length; i ++)
           {
                if (freq[i] % 2 != 0)
                {
                    oddCount += 1;
                    oddInd = i;
                }
           }
           if (oddCount > 1)
           {
                pw.println("NO SOLUTION");
           }
           else
           {
                for(int i = 0; i < freq.length; i++)
                {
                    if (freq[i] % 2 == 0)
                    {
                        for (int j = 0; j < freq[i] / 2; j++)
                        {
                            front += (char)(i + 65);
                            pw.print((char)(i + 65));
                        }
                    }
                }
                s.setLength(0);
                s.append(front);
                if (oddInd != 100)
                {
                    for (int i = 0; i < freq[oddInd]; i++)
                    {
                        pw.print((char)(oddInd + 65));
                    }
                    pw.print(s.reverse());
                }
                else
                {
                    pw.println(s.reverse());
                }
           }
        }

        
        pw.close();
    }
}
