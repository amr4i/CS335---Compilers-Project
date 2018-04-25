using System;
namespace Rextester
{
    public class Program
    {
        public void Main(string[] args)
        {
			int a = 5;

			do {
				a = a + 1;
				print(a);
				print("\n");
			}
			while(a<=10);
			
        }
    }
}
