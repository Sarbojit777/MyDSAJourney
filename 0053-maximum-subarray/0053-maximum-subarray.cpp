class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int prefix = nums[0];
    int maxSum = nums[0];
    for(int i = 1 ; i<nums.size();i++){
        prefix =max(prefix + nums[i],nums[i]) ;
        maxSum = max(prefix,maxSum);
    }
    return maxSum;
    }
};