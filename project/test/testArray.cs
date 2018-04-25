using System;
namespace Rextester
{
    public class Program
    {
        int a, b, c;
        
        public void Main()
        {
            int[] c = new int[5]{10,2,3,4,5}; 
            c[1] = 409;
            int t = c[2]*8;

            print(t);
        }
    }
}
