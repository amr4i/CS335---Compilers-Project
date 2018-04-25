// Program to Check whether the Entered Number is Even or Odd

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
   
namespace check1
{
    class Program
        {
            void Main(string[] args)
            {
                int i=9;
                int res;
                if(i <= 9)
                    if(i % 2 == 0)
                        res = 0;
                    else
                        res = 1;
                    

                    
                print("Parity of ");
                print(i);
                print(" is : ");
                print(res);
                print("\n");
            }
        }
}
