// =====================================================================================
// 
//       Filename:  Problem26.cpp
// 
//    Description:  Removing duplicates from a sorted array
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

            vector<int> pos;
            int size,i,j,k;

            i = 0;
            j = 0;

            size = nums.size();

            while (i < size)
            {
                j = i+1;
                while (nums[i] == nums[j] && j < size)
                {
                    pos.push_back(j);
                    j++;
                }

                Sort(pos);
                size = Erase(pos,nums);
                pos.clear();

                i++;
            }

            return size;
        }

        int Erase(vector<int>& pos, vector<int>& nums)
        {
            int i, sizePos, size;
            sizePos = pos.size();

            for (i = (sizePos - 1); i >= 0; i--)
            {
                nums.erase(nums.begin() + pos[i]);
            }
            size = nums.size();

            return size;
        }

        void Sort(vector<int>& pos)
        {
            int i,j,temp, size;

            temp = 0;
            size = pos.size();

            for (i = 0; i < size; i++)
            {
                for (j = i+1; j < size; j++)
                {
                    if(pos[i] > pos[j])
                    {
                        temp = pos[i];
                        pos[i] = pos[j];
                        pos[j] = temp;
                    }
                }

            }

        }
};


