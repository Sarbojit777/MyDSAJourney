class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        vector<int> nsl(arr.size() , -1 );
        vector<int> nsr(arr.size() , arr.size() );
        stack<int> s ; 
        // smaller element left 
        for(int i = arr.size() - 1 ; i >=0 ;i--){
            while(!s.empty() && arr[i] < arr[s.top()]){
                nsl[s.top()] = i;
                s.pop();
            }
            s.push(i);
        }
        while(!s.empty()) s.pop();
        // smaller element right
        for(int i = 0 ; i < arr.size() ;i++){
            while(!s.empty() && arr[s.top()]>arr[i]){
                nsr[s.top()] = i;
                s.pop();
            }
            s.push(i);
        }
        int maxArea = 0;
        for(int i = 0 ; i < arr.size() ;i++){
            int width = nsr[i] - nsl[i] - 1 ;
            maxArea = max(maxArea , width * arr[i]);
        }
        return maxArea;
    }
};