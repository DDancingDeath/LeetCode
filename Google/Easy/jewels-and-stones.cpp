//771. Jewels and Stones
//https://leetcode.com/problems/jewels-and-stones/

//Time - O(n)
//Space - O(1)

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_set<char> set;
        
        for(auto c:J)
            set.insert(c);
        
        int res = 0;
        for(int c:S)
        {
            if(set.find(c) != set.end())
                res++;
        }
        
        return res;
    }
};
