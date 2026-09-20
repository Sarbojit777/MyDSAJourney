class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans ; 
        deque<int> dq ; 
        for(int i = 0 ;  i < nums.size() ; i++){
            // removing indices lesser than the window  
            while(!dq.empty() && dq.front() <= i-k) dq.pop_front();
            // removing  elements front rear which are less than arr[i]
            while(!dq.empty() && nums[dq.back()]<=nums[i]) dq.pop_back();
            // adding index 
            dq.push_back(i);
            // we have the window 
            if(i>=k-1) ans.push_back(nums[dq.front()]);
        }
        return ans ;
    }
};