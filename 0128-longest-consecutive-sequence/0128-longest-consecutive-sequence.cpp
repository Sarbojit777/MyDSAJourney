class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        unordered_set<int> s(nums.begin(),nums.end());
        int ans = 1;
        for (int curr : s){
            
            if(s.find(curr-1)==s.end()){
                int l = 1;
                while(s.find(curr+1)!=s.end()){
                    curr++;
                    l++;
                }
                ans=max(ans,l);
                if(ans==nums.size()) break;
            }
        }
        return ans;
    }
};