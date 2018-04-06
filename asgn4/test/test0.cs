using System;
namespace Rextester
{
    public class Program
    {
        public int fn(int x, int y, int c){
	    c = x + y;
            return c;
        }

        public void Main(string[] args)
        {
            int[] c = new int[5];   
            c[1] = 409;

		    int p = 2;
            int t = fn(p, 3, 4);
        }
    }
}
