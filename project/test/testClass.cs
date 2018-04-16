using System;
namespace Rextester
{
    public class Program
    {
	int a = 2;
        
	public Program(){
		a = a * 2;
	}

	public int foo(int x, int y){
		a = a * x;
		x = a + y;
		return x;		
	}

        public void Main(string[] args)
        {
		int a = 2, b = 2;
            	Program obj = new Program();
		a = obj.foo(a, b);
        }
    }
}
