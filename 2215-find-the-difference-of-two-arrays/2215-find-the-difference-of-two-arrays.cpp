class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        unordered_set<int> m1(nums1.begin(),nums1.end());
        unordered_set<int> m2(nums2.begin(),nums2.end());
        vector<int> a;
        for(int i : nums1){
            if(m2.find(i)==m2.end()){
               a.push_back(i);
               m2.insert(i); 
            } 
        }
        ans.push_back(a);
        a.clear();
        for(int i : nums2){
            if(m1.find(i)==m1.end()){
              a.push_back(i);  
              m1.insert(i); 
            } 
        }
        ans.push_back(a);
        return ans;
    }
};