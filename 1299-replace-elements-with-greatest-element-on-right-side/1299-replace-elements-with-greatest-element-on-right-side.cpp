class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n,0);
        ans[n-1] = -1;
        int greatestRight = arr[n-1];
        for(int i = n-2 ; i>=0 ; i--){
            ans[i]=greatestRight;
            if(arr[i]>greatestRight) greatestRight = arr[i];
        }
        return ans;
    }
};