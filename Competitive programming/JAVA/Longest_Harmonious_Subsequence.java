
/*
leetcode-Longest Harmonious Subsequence
Problem Statement:
-----------------
We define a harmonious array as an array where the difference between its maximum value and its minimum value is exactly 1.Given an integer array nums, return the length of its longest harmonious subsequence among all its possible subsequences.
A subsequence of array is a sequence that can be derived from the array by deleting some or no elements without changing the order of the remaining elements.

Example 1:
Input: nums = [1,3,2,2,5,2,3,7]
Output: 5
Explanation: The longest harmonious subsequence is [3,2,2,2,3].

Example 2:
Input: nums = [1,2,3,4]
Output: 2
*/
// Link -->https://leetcode.com/problems/longest-harmonious-subsequence/





// Code:

class Solution {
    public int findLHS(int[] nums) {
        int rst = 0;
        Map<Integer, Integer> map = new HashMap<>();
        
        // put the number and its occurence in the map
        for (int num : nums) {
            map.put(num, map.getOrDefault(num, 0) + 1);
        }
        
        // Traverse the map to get the longest harmonious subsequence
        for (int key : map.keySet()) {
            if (map.containsKey(key + 1)) {
                rst = Math.max(rst, map.get(key) + map.get(key + 1));
            }
        }
        return rst;
    }
}

