class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        // ans1 
        int ans1 = maxSubArray(nums);
        int totalSum = 0;
        for(int i = 0 ; i<nums.size() ;i++){
            totalSum+=nums[i];
        }
        // ans2
        int ans2 = totalSum - minSubArray(nums);
        if(minSubArray(nums)  == totalSum) return ans1;
        return max(ans1,ans2);
    }
    int maxSubArray(vector<int>& nums){
        int prefix = nums[0]; 
        int maxSum = nums[0];
        for(int i = 1 ; i<nums.size(); i++){
            prefix = max(prefix+nums[i],nums[i]);
            maxSum = max(maxSum , prefix);
        }
        return maxSum;
    }
    int minSubArray(vector<int>& nums){
        int prefix = nums[0]; 
        int minSum = nums[0];
        for(int i = 1 ; i<nums.size(); i++){
            prefix = min(prefix+nums[i],nums[i]);
            minSum = min(minSum,prefix);
        }
        return minSum;
    }
};