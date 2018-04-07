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
            int[] c = new int[5]{10,2,3,4,5}; 
            c[1] = 409;
            if(c[1] > 20){
                long m = 3;
            }
            int k = 10;  
            int t = fn(9, 3, 4);
        }
    }
}
