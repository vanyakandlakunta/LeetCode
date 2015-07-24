// =====================================================================================
// 
//       Filename:  Problem231.cpp
// 
//    Description:  Check if the number is a power of two
// 
//        Version:  0.01
//        Created:  Saturday 25 July 2015 12:45:37  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  Vanya (SYSU-CMU), kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

class Solution {

    public:

        bool isPowerOfTwo(int n) {

            if(n <= 0)
            {
                return false;
            }

            while(n > 1)
            {
                if(n % 2 == 0)
                {
                    n = n >> 1;
                    continue;
                }
                else
                {
                    return false;
                }
            }

            return true;
        }
};
