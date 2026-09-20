class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans(nums.size(),-1);
        stack<int> s ; 
        int n = nums.size();
        for(int i = 2*n-1 ; i>=0 ; i--){
            int idx = i%n;
            while(!s.empty() && s.top() <= nums[idx]) s.pop();
            if(i<n && !s.empty()){
                ans[idx] = s.top();
            }
            s.push(nums[idx]);
        }
        return ans;
    }
};