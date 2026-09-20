class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(nums1.size(),-1);  //nums1.size() , -1
        vector<int> nge(nums2.size() , -1);
        stack<int> s ;
        
        // finding next greater element for nums2 array
        // storing result in nse 
        for(int i = 0 ; i < nums2.size() ;i++){
            while(!s.empty() && nums2[s.top()]<nums2[i]){
                nge[s.top()] = nums2[i];
                s.pop();
            }
            s.push(i);
        }
        for(int i = 0 ; i < nums1.size() ;i++){
            for(int j = 0 ; j < nums2.size() ;j++){
                if(nums1[i]==nums2[j]){
                  ans[i] = nge[j];  
                  break;
                } 
            }
        }
        return ans;
    }
};