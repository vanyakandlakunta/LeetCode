// =====================================================================================
// 
//       Filename:  Problem9.cpp
// 
//    Description:  LeetCode #9
// 
//        Version:  0.01
//        Created:  Friday 10 July 2015 01:51:18  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================
// 
class Solution {

    public:
        bool isPalindrome(int x) {

            int reversed;
            
            reversed = Reverse(x);

            if(x == reversed)
            {
                return true;
            }

            else
            {
                return false;
            }
        }

        int Reverse(int num)
        {
            int temp = 0;

            while(num > 0)
            {
                temp = (temp*10) + (num%10);
                num = num/10;
            }

            return temp;
        }
};


