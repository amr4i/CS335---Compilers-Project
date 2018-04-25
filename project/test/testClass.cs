using System;
namespace Rextester
{
    public class Program
    {
		public void dash(int b){
			int a = b*2;
			print(a);
		}

		public int foo(int x, int y){
			int a = 10;
			a = a * x;
			x = a + y;
			return x;		
		}

        public void Main(string[] args)
        {
			int a_ = 2;
			int  b_ = 21;
			dash(b_);
        }
    }
}
