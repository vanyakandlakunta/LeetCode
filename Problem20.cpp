// =====================================================================================
// 
//       Filename:  Problem20.cpp
// 
//    Description:  #20 of LeetCode. Valid Paranthesis
// 
//        Version:  0.01
//        Created:  Thursday 16 July 2015 09:21:02  IST
//       Revision:  none
//       Compiler:  clang 3.5
// 
//         Author:  kchary@andrew.cmu.edu
//        Company:  Carnegie Mellon University
// =====================================================================================

class Solution {

    char str[20];
    int top;

    public:

    void push(char temp)
    {
        if(top == (19))
        {
            std::cout<<"Stack FULL"<<std::endl;
        }
        else
        {
            top = top + 1;
            str[top] = temp;
        }
    }

    void pop()
    {
        char temp;

        if(top == 0)
        {
            std::cout<<"Stack EMPTY"<<std::endl;
        }
        else
        {
            temp = str[top];
            top = top - 1;
        }
    }

    bool isValid(string s) {

        int size, i;

        size = s.size();

        if(size % 2 == 0)
        {
            for (i = 0;i < size; i++)
            {
                if(s[i] == '(' ||s[i]== '['||s[i] == '{')
                {
                    push(s[i]);
                }
                else if( s[i]==']' || s[i] == ')' || s[i] == '}' )
                {

                    push(s[i]);

                    if( (str[top]==']' && str[top-1] == '[')|| (str[top] == ')' && str[top-1]== '(')|| (str[top] == '}' && str[top-1] == '{'))
                    {

                        pop();
                        pop();

                    }
                }
                else 
                {
                    //do nothing

                }

            }
        }
        else
        {
            return false;
        }

        if(top == 0)
        {
            return true;
        }
        else
        {
            return false;
        }

    }

};

