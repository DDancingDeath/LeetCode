//1470. Shuffle the Array
//https://leetcode.com/problems/shuffle-the-array/

//Time - O(n)
//Space - O(n)

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
    
        vector<int> res;
        for(int i=0; i<n; i++)
        {
            res.push_back(nums[i]);
            res.push_back(nums[n+i]);
        }
        
        return res;
    }
};
