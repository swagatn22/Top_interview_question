class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        vector<int> v;
        priority_queue<pair<int,int>> pq;
        for(int i = 0; i<nums.size();i++){
            m[nums[i]] ++;
        }
        for(auto it = m.begin(); it != m.end(); it++){
            pq.push(make_pair(it->second,it->first));
        }
        for(int i =0; i<k && !pq.empty(); i++){
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};
