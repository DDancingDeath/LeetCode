//1874. Minimize Product Sum of Two Arrays
//https://leetcode.com/problems/minimize-product-sum-of-two-arrays/
  
// Time:  O(n)
// Space: O(1)
// Best Approach - Counting Sort

class Solution {
public:
    //Sorting O(nlogn)
    int minProductSum(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end(), greater<int>());
        
        int productSum = 0;
        for(int i=0; i<nums1.size(); i++)
            productSum += nums1[i]*nums2[i];
        
        return productSum;
    }
  
   --------------------------------------------------------------------------
  
     //Counting Sort O(n)
    #define N 100
    int minProductSum(vector<int>& nums1, vector<int>& nums2) {
        vector<int> count1(N+1, 0);
        vector<int> count2(N+1, 0);
        
        for(int i=0; i<nums1.size(); i++)
        {
            count1[nums1[i]]++;
            count2[nums2[i]]++;
        }
        
        int ptr1 = 1;
        int ptr2 = N;
        int productSum = 0;
        while(ptr1 <= N && ptr2 > 0)
        {
            if(!count1[ptr1])
                ptr1++;
            if(!count2[ptr2])
                ptr2--;
            
            if(ptr1 <= N && ptr2 > 0 && count1[ptr1] && count2[ptr2])
            {
                int minCount = min(count1[ptr1], count2[ptr2]);
                productSum += minCount*ptr1*ptr2;
                count1[ptr1] -= minCount;
                count2[ptr2] -= minCount;
            }
        }
        
        return productSum;
    }
};
