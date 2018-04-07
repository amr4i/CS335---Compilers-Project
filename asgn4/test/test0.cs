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
            int[] c = new int[5]{1,2,3,4,5}; 
            int k = 10;  
            c[1] = 409;
		    int p = 2;
            int t = fn(p, 3, 4);
        }
    }
}
