class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c = 0 ;
        for(int i = 0 ; i<nums.size() ;i++){
            int dig = 0 ;
            int num = nums[i];
            while(num!=0){
                num=num/10;
                dig++;
            }
            if(dig%2==0) c++;
        }
        return c;
    }
};