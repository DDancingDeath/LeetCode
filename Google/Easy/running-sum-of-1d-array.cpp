//1480. Running Sum of 1d Array
//https://leetcode.com/problems/running-sum-of-1d-array/

//Time - O(n)
//Space - O(n)

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        vector<int> sum;
        
        if(nums.size())
        {
            sum.push_back(nums[0]);
            
            for(int i=1; i<nums.size(); i++)
                sum.push_back(nums[i]+sum[i-1]);
        }
        
        return sum;
    }
};
