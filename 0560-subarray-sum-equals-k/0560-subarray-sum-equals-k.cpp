class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> m ; 
        int prefixSum = 0 ;
        int c = 0 ;
        m[0] = 1;
        for(int i : nums){
            prefixSum+=i;
            c+=m[prefixSum-k];
            m[prefixSum]++;
        }
        return c;
    }
};