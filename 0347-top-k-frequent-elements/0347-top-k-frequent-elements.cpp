class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        vector<int> ans;
        priority_queue<pair<int,int>> pq;
        for(int x : nums) freq[x]++;
        for(auto it : freq){
            pq.push({it.second,it.first});
        }
        for(int i = 0 ; i < k ; i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};