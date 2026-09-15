class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        // int c = 0;
        // int freq[100] = {0};
        // for(int i = 0 ; i<nums.size() ; i++){
        //     // for(int j = i+1 ; j<nums.size() ; j++){
        //     //     if(nums[i]==nums[j]) c++;
        //     // }
        // }
        // return c;

        int c = 0 ;
        int freq[101] = {0};
        for(int num : nums){
            c+=freq[num];
            freq[num]++;
        }
        return c;
    }
};