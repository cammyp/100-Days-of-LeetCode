// 448. Find All Numbers Disappeared in an Array

using System;

namespace Day1
{
    class Solution {

        // function name 
        public IList<int> findDisappearedNumbers(int[] nums) {
            // init vars
            HashSet<int> list = new HashSet<int>();
            List<int> result = new List<int>();

            // loop through nums length and add to list
            for(int i = 0; i < nums.Length; i++) {
                list.Add(nums[i]);
            }

            // if 1 - nums.length is not in list add to result 
            for(int i = 1; i < nums.Length; i++) {
                if(!list.Contains(i)) {
                    result.Add(i);
                }
            }
            return result;
        }
    }
    
}

/*
This structure is more like java and makes more sense to me right now.
Also im not sure why the methods are capitalized, need to look into this
*/

