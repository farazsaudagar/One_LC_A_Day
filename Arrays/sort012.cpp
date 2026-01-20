// Date: Sunday, Jan 18 2026
// LeetCode #75 - Sort Colors
// Difficulty: Medium
// Technique: Dutch National Flag Algorithm
// Intuition: https://www.youtube.com/watch?v=9pdkbqGwUhs
// Time Complexity: O(n), Space Complexity: O(1)

class Solution {
    public:
	int sortColors(vector<int>& nums)
	{
	    int low = 0, mid = 0, high = nums.size() - 1;
	    while(mid <= high)
	    {
 		if (nums[mid] == 0)
		{
		    swap(nums[low], nums[mid]);
		    low++;
		    mid++;
		}
		else if(nums[mid] == 1)
		{
		    mid++;
		}
		else 
		{
		    swap(nums[mid], nums[high]);
		    high--;
		}
	    }
	}

}
