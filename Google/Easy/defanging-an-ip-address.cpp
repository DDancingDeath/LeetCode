//1108. Defanging an IP Address
//https://leetcode.com/problems/defanging-an-ip-address/

//Time - O(n)
//Space - O(n)

class Solution {
public:
    string defangIPaddr(string address) {
        
        string res = "";
        
        for(int i=0; i<address.size(); i++)
        {
            if(address[i] == '.')
                res += "[.]";
            else
                res += address[i];
        }
        
        return res;
    }
};
