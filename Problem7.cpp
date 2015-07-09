// =====================================================================================
// 
//       Filename:  Problem7.cpp
// 
//    Description:  Problem 7 of LeetCode
// 
//        Version:  0.01
//        Created:  Thursday 09 July 2015 12:42:22  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

class Solution {

    public:

        int reverse(int x) {

            long long reversed;
            int sign = 0, temp;

            temp = x;

            if(x < 0)
            {
                sign  = -1;
            }
            else
            {
                sign  = 1;
            }

            temp = x * sign;

            reversed = Reversed(temp);
            reversed*=sign;

            if(reversed > 0x7fffffff || reversed < ((-0x7fffffff)-1))
            {
                return 0;
            }

            else
            {
                return reversed;
            }

        }

        long long Reversed(int num)
        {
            long long temp = 0;

            while(num > 0)
            {
                temp = (temp * 10) + (num % 10);
                num = num / 10;
            }

            return temp;
        }
};
