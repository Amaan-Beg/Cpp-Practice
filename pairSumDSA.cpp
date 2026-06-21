#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target)
{
    vector<int> ans;

    int n = nums.size();
    int i = 0, j = n - 1;

    while (i < j)
    {
        int pairSum = nums[i] + nums[j];

        if (pairSum > target)
        {
            j--;
        }
        else if (pairSum < target)
        {
            i++;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {2, 4, 5, 8};
    int target = 10;

    vector<int> ans = pairSum(nums, target);
    cout << ans[0] << ", " << ans[1] << endl;

    return 0;
}
// Two Pointer Approach (Works only for sorted arrays)

// i pointer array ke start se chalega
// j pointer array ke end se chalega

// Har iteration me nums[i] + nums[j] ka sum nikalo

// Agar sum target se bada hai:
// right pointer (j) ko left move karo,
// kyunki sorted array me right side ke elements bade hote hain

// Agar sum target se chhota hai:
// left pointer (i) ko right move karo,
// kyunki hume bada sum chahiye

// Agar sum target ke barabar hai:
// i aur j indices ko answer vector me store karke return kar do

// Pointers tab tak move karte rahenge jab tak i < j rahe

// Time Complexity: O(n)
// Space Complexity: O(1) extra space

// Important: Ye approach sirf sorted array par hi kaam karti hai

/*
    Find two indices whose elements add up to the target.

    Algorithm:
    1. Place one pointer at the beginning (i)
       and another at the end (j).
    2. Compare nums[i] + nums[j] with target.
    3. Move pointers based on the comparison:
       - sum > target -> j--
       - sum < target -> i++
       - sum == target -> return indices

    Note: Array must be sorted.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/