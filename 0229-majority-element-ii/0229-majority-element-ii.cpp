class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        vector<int> ans;
        for(int i : nums){
            m[i]++;
        }
        int z=nums.size()/3;
        for(pair<int,int> i : m){
            if(i.second>z) ans.push_back(i.first);
        }
        return ans;
    }
};