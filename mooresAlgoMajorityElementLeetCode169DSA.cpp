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
        int freq =0, ans = 0;
        for(int i =0; i <n; i++){
            if(freq == 0){
                ans = nums[i];
            }
            if(ans == nums[i]){
                freq++;
            }
            else{
                freq--;
            }
        }
        int count = 0;
        for(int val : nums){
            if (val == ans)
            {
                count++;
            }
            
            if (count > n/2) => ans
            else => -1
            
            return ans;
        }
    }
};

/*
Moore's Voting Algorithm

Soch:
Agar koi element majority hai (n/2 se zyada baar aata hai),
to baaki sab elements usse completely cancel nahi kar sakte.

ans  -> current majority candidate
freq -> candidate ka count

Working:
1. Jab freq = 0 ho jaye, iska matlab previous candidate
   ka influence khatam ho gaya, to current element ko
   naya candidate bana do.

2. Agar current element candidate (ans) ke equal hai,
   to freq++ karo.

3. Agar equal nahi hai,
   to freq-- karo.
   (Dono ek dusre ko cancel kar rahe hain.)

Cancellation Example:
[2, 2, 1, 1, 1, 2, 2]

2 -> freq = 1
2 -> freq = 2
1 -> freq = 1
1 -> freq = 0  (2 aur 1 cancel ho gaye)

Ab freq 0 hai, isliye next element (1) naya candidate banega.

Pure array ke end tak jo candidate bachta hai,
wahi majority element hota hai.

Time Complexity: O(n)
Space Complexity: O(1)
*/
