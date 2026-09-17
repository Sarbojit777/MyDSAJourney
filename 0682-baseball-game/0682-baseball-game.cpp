class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st ; 
         
        for(int i = 0 ; i < operations.size() ; i++){
            if(operations[i]!="+" && operations[i]!="D" && operations[i]!="C") st.push(stoi(operations[i]));
            else{
                if(operations[i]=="C") st.pop();
                if(operations[i]=="D") st.push(2*st.top());
                if(operations[i]=="+"){
                    int a = st.top();
                    st.pop();
                    int b = st.top();
                    st.pop();
                    st.push(b);
                    st.push(a);
                    st.push(a+b);

                }
            }
        }
        int ans = 0 ; 
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};