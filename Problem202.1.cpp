// =====================================================================================
// 
//       Filename:  Problem202.cpp
// 
//    Description:  LeetCode #202 - revised
// 
//        Version:  0.01
//        Created:  Wednesday 08 July 2015 09:00:13  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

/* Calculate the sum of square of each digit in a number until it gives 1 */


class Solution 
{

    public:

        bool isHappy(int n) {

            int count;

            if(n == 1)
            {
                return true;
            }

            while(1)
            {
                n = SumOfDigits(n);

                if(n == 1)
                {
                    return true;
                }
                else if(n == 0)
                {
                    return false;
                }
                else
                {
                    do nothing
                }

            }
        }

        int SumOfDigits(int num)
        {
            int temp = 0;

            while(num)
            {
                temp += ((num%10) * (num %10));
                count--;
            }

            if(temp == 20)
            {
                return 0;
            }

            else
            {
                return temp;
            }
        }
};

