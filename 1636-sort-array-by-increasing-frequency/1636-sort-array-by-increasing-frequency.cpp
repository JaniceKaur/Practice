class Solution {
public:
    class Compare{
        public:
        bool operator()(pair<int,int> a,pair<int,int> b){
            if (a.second==b.second)
                return a.first<b.first;
            return a.second>b.second;
        }
    };
    vector<int> frequencySort(vector<int>& nums) {
        vector<int> v;
        unordered_map<int,int> um;
        for(int num:nums)
        {
            um[num]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,Compare> heap;
        for(auto i=um.begin(); i!=um.end(); i++)
        {
            pair<int,int> p(i->first,i->second);
            heap.push(p); 
        }
        while(heap.size()>0)
        {
            int x=heap.top().first;
            int n=heap.top().second;
            for(int i=0;i<n;i++)
            {
                v.push_back(x);
            }
            heap.pop();
        }
        return v;
    }
};