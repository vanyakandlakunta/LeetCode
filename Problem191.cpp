// =====================================================================================
// 
//       Filename:  Problem191.cpp
// 
//    Description:  191 of LeetCode
// 
//        Version:  0.01
//        Created:  Thursday 09 July 2015 01:46:13  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

class Solution {

    public:
        int hammingWeight(uint32_t n) {

            int temp, i, count, mask;
            count = 0;
            mask = 1;

            for (i = 0; i < 32; i++ )
            {
                temp = n & mask;

                if(temp == 1)
                {
                    count++;
                }

                else
                {
                    temp = 0;
                }

                n = n >> 1;
            }

            return count;

        }
};

