// 448. Find All Numbers Disappeared in an Array

#include <iostream>
#include <vector>
using namespace std;

// class declaration
class Solution
{

    // public declaration - this is for function and variables
public:
    // function declaration - returns a vector<int> and takes in a vector<int>
    // vectors are dynamic arrays with the ability to resize itself when an object is inserted and deleted
    // & sign means memory address - need to look into this
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        // int len - size of arg nums
        int len = nums.size(); // 8
        // loop through len
        for (int i = 0; i < len; i++)
        {
            int m = abs(nums[i]) - 1;
            nums[m] = nums[m] > 0 ? -nums[m] : nums[m];
        }
        // create a vector res
        vector<int> res;
        // loop through len
        for (int i = 0; i < len; i++)
        {
            // if x is greater than 0 add i + 1 to res
            if (nums[i] > 0)
                res.push_back(i + 1);
        }
        return res;
    }
};

// -4 3 2 7 -8 2 -3 -1
// 2 3 4 6

/*
LeetCode Easy
Loop through len of vector and negate something 
Loop through again and look for something - if not there add to result
*/