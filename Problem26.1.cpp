// =====================================================================================
// 
//       Filename:  Problem26.cpp
// 
//    Description:  Removing duplicates from a sorted array - revised
// 
//        Version:  0.01
//        Created:  Friday 17 July 2015 10:38:05  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================
/*  Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.
 *
 *  Do not allocate extra space for another array, you must do this in place with constant memory.
 *
 *  For example,
 *  Given input array nums = [1,1,2],
 *
 *  Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively. It doesn't matter what you leave beyond the new length. */

class Solution {

    public:

        int removeDuplicates(vector<int>& nums) {

            int pos[100];
            int size,i,j,posIndex;

            i = 0;
            j = 0;
            posIndex = 0;

            size = nums.size();
            

            while (i < size)
            {
                j = i+1;
                while (nums[i] == nums[j] && j < size)
                {
                    pos[posIndex] = j;
                    j++;
                    posIndex++;
                }

                size = Erase(pos,nums);
                pos[]= {0};

                i = j;
            }

            return size;
        }

        int Erase(int pos[], vector<int>& nums,int posIndex)
        {
            int i, size;
            
            for (i = (posIndex - 1); i >= 0; i--)
            {
                nums.erase(nums.begin() + pos[i]);
            }
            size = nums.size();

            return size;
        }

};


