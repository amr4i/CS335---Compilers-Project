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
            public bool leap(int y)
            {
                if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
            void Main()
            {
                int y;
                bool isLeap;
                y= readdata();
                isLeap = leap(2016);
            }
        }
    }
