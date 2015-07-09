// =====================================================================================
// 
//       Filename:  Problem202.cpp
// 
//    Description:  LeetCode #202
// 
//        Version:  0.01
//        Created:  Wednesday 08 July 2015 09:00:13  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

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
                count = CountDigits(n);
                n = SumOfDigits(n,count);

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

        int SumOfDigits(int num, int count)
        {
            int temp = 0, divfactor,digit;

            while(count > 0)
            {
                divfactor = pow(10,(count-1));
                digit = num / divfactor;
                num = num % divfactor;
                temp += pow(digit,2);
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

        int CountDigits(int num)
        {
            int count = 0;

            while(num != 0)
            {
                if(num < 10)
                {
                    count += 1;
                    break;
                }
                else
                {
                    num = num / 10;
                    count++;
                }
            }

            return count;
        }
};

