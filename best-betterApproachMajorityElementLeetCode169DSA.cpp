/*Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
 

Constraints:

n == nums.length
1 <= n <= 5 * 104
-109 <= nums[i] <= 109
The input is generated such that a majority element will exist in the array.*/


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int freq =1, ans = nums[0];
        for(int i = 1;i< n;i++){
            if(nums[i] == nums[i-1]){
                freq++;
            }
            else{
                freq = 1;
                ans = nums[i];
            }
            if(freq > n/2) {
            return ans;
            }
        }
    return ans;


/*
    Approach: Sorting + Frequency Count

    1. Sort the array so identical elements come together.
    2. Traverse the sorted array and count consecutive occurrences.
    3. If frequency of any element becomes greater than n/2,
       return that element.

    Time Complexity: O(n log n)  // due to sorting
    Space Complexity: O(1)      // ignoring sort's internal space
*/