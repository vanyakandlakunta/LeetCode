// =====================================================================================
// 
//       Filename:  Problem191.1.cpp
// 
//    Description:  Bit count with revised algorithm
// 
//        Version:  0.01
//        Created:  Saturday 18 July 2015 11:14:21  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

class Solution {

    public:
        int hammingWeight(uint32_t n) {

            int count = 0;
            
            while(n)
            {
                count++;
                n& = (n-1);
            }

            return count;

        }
};

