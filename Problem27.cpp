// =====================================================================================
// 
//       Filename:  Problem27.cpp
// 
//    Description:  Removing an Element from a vector
// 
//        Version:  0.01
//        Created:  Friday 17 July 2015 09:17:51  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================
/*  Given an array and a value, remove all instances of that value in place and return the new length.
 *
 *  The order of elements can be changed. It doesn't matter what you leave beyond the new length. */

class Solution {

    public:
        int removeElement(vector<int>& nums, int val) {

            int size_p,size,i,j;
            vector<int> pos;

            size = nums.size();

            for (i = 0;i < size; i++)
            {
                if(nums[i] == val)
                {
                    //storing the locations of the occurences of 'val'
                    pos.push_back(i);
                }
            }

            size_p = pos.size();

            for (j = (size_p-1);j >= 0; j--)
            {
                //removing the values at those locations from 'nums'
                nums.erase(nums.begin() + pos[j]);
            }

            size = nums.size();

            return size;
        }

};

