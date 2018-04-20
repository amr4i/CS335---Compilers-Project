//Program to Check Whether the Entered Year is a Leap Year or Not

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
     
namespace Program
    {
        class leapyear
        {
            public int readdata()
            {
                return 2018;
            }
            public int leap(int y, int x)
            {
                if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
                {
                    return 0;
                }
                else
                {
                    return 1;
                }
            }
            void Main()
            {
                int y1, x1;
                int isLeap;
                y1= readdata();
                x1 = 2;
                isLeap = leap(y1, x1);
                if (isLeap == 1) x1 = 2;
                else    x1 = 9;
                print(x1);
            }
        }
    }
