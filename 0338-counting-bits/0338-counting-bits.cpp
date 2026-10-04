class Solution {
public:
int binaryToInt(string s) {
    int num = 0;

    for(char c : s)
        num = num * 2 + (c - '0');

    return num;
}
    vector<int> countBits(int n) {
        queue<string> q ; 
        vector<int> ans ;
        vector<int> bits ; 
        ans.push_back(0);
        q.push("1");
        for(int i = 0 ; i < n ; i ++){
            int ele = binaryToInt(q.front());
            q.push(q.front()+"0");
            q.push(q.front()+"1");
            q.pop();
            bits.push_back(ele);
        }
        for(int i = 0 ; i < bits.size() ; i++){
            int c = 0 ; 
            int ele = bits[i];
            while(ele>0){
                ele = ele & (ele-1);
                c++;
            }
            ans.push_back(c);
        }
        return ans;
    }
};