class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> um;
        vector<int> v;
            priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> heap;
        for (int i = 0;i<nums.size();i++)
            um[nums[i]]+=1;
        
        for(auto i=um.begin();i!=um.end();i++)
        {
            heap.push({i->second,i->first});
            if(heap.size()>k)
                heap.pop();
        }
        for(int i=0;i<k;i++)
        {
            v.push_back(heap.top().second);
            heap.pop();
        }
        return v;
    }
};