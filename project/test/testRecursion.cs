// Program to Find Greatest among 2 numbers

using System;

class prog
    {
        public int compute_factorial(int i){
            print(i);
            print("->");
            if(i>1){
                int a = i*compute_factorial(i-1);
                print(a);
                print("->");
                return a;
            }
            else{
                print("\n");
                return 1;
            }
        }
        
        public void Main()
        {
            // factorial using recursion
            int fact, i=9;
            fact = compute_factorial(i);
            print("\n");
            print (fact);
            print("\n");
        }
    }
    
