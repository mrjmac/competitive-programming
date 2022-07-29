public class blob
{
    private String[][] blob;
    private int count;

    public blob(String[][] a)
    {
        blob = a;
        count = 0;
    }

    public int getCount(int x, int y)
    {
        if (x >= 0 && x < blob.length && y >= 0 && y < blob[x].length && blob[x][y].equals("@"))
        {
            blob[x][y] = "-";
            count += 1;
            getCount(x - 1, y);
            getCount(x + 1, y);
            getCount(x, y- 1);
            getCount(x, y + 1);
        }
        return count;
    }
}