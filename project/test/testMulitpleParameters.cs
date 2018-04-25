// Program to Find the Frequency of the Word ʺtheʺ in a given Sentence

using System;

namespace doubleClass{
    class first
        {
            public int Count(int a, int b, int c)
            {
                int i = a, cnt = 0;
                while(i < b){
                    i = i + 1;
                    cnt = cnt + 1;
                }
                return cnt*c;
            }

            public void Main()
            {
                int i = 9;
                int[] sid = new int[4]{4, 7, 8, 10};
                int res = Count(sid[0], sid[1], sid[2]);

                print(res);
                print("\n");
            }
        }
}