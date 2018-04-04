using System;
namespace Rextester
{
    public class Program
    {
        public void Main(string[] args)
        {
		int  a = 5;
		while(a<=10){
			a = a + 1;
			if(a != 1){
				int p = 6;
				continue;
			}
		}
		
		int b = a;
        }
    }
}
