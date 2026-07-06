class Solution {
public:
    int helper(int n,vector<int> &s){
        if(n==1 || n==2) return n;
        if(s[n]!=-1) return s[n];
        s[n]= helper(n-1,s) + helper(n-2,s);
        return s[n];
    }
    int climbStairs(int n) {
        vector<int> s(n+1,-1);
        return helper(n,s);
    }
};