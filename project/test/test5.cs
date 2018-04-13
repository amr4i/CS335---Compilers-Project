// Program to Find Greatest among 2 numbers

using System;

class prog
    {
        public int compute_factorial(int i){
            if(i>1)
                return i*compute_factorial(i-1);
            else
                return 1;
        }
        public void Main()
        {
            // factorial using recursion
            int fact, i=9;
            fact = compute_factorial(i);
        }
    }
    
