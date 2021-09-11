//1672. Richest Customer Wealth
//https://leetcode.com/problems/richest-customer-wealth/

//Time - O(mn)
//Space - O(1)

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = 0;
        
        for (int i=0; i<accounts.size(); i++)
        {
            int tempmax = 0;
            for (int j=0; j<accounts[i].size(); j++)
            {
                tempmax += accounts[i][j];
            }
            
            if(tempmax > max)
                max = tempmax;
        }
        
        return max;   
    }
};
