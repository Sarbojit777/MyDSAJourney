class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // map of value,index
        unordered_map<int,int> m;
        
        for(int i=0;i<nums.size();i++){
            if(m.count(nums[i]) && abs(i-m[nums[i]])<=k) return true;
            else m[nums[i]]=i;
        }
        return false;
    }
};

//219 , 3 , 904 , 340 , 992 ,