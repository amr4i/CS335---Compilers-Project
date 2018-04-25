using System;
namespace Rextester
{
    public class Program
    {
		int a = 2, b = 3, c=4;
		char d = 'c';
		int [] e = new int[] {1, 2, 3, 4, 5, 6};
	        
		public int foo(int x, int y){
			int a = 10;
			a = a * x;
			return x;		
		}

        public void Main(string[] args)
        {
			int a_ = 2;
			int  b_ = 2;
	    	Program obj = new Program();

	    	int res = foo(a_, b_);
	    	print(res);
        }
    }
}
