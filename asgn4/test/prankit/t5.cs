using System;

namespace t2{
	public class c2{
		public void Main(string[] args){
			int c, e, d ;
			c=4;
			e=9;
			d=1;
			if (c!=0 && d!=0)
		        ++d;
		    else if (d & e) // bitwise and
		        ++e;
		    else
		        --d;
		}
	}
}