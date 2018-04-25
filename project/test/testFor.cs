//Program to Swap two Numbers

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Test
    {
        class Program
        {
            void Main(string[] args)
            {
                int i = 8, count = 0;
                for(i = 8 ; i < 11000 ; i *= 2){
                    print(i);
                    print("\n");
                    count = count + 1;
                }
                print("Value of i : ");
                print(i);
                print("\nValue of count : ");
                print(count);
                print("\n");
            }
        }
    }
