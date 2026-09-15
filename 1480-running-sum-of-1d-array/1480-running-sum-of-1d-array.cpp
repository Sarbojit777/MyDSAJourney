class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        // vector<int> runningSum(n,0);
        int prev = nums[0];
        // runningSum[0] = nums[0];
        for(int i = 1 ; i<n ; i++){
            
            nums[i] = prev + nums[i];
            prev = nums[i];
        }
        return nums;
    }
};