class Solution {
public:
    vector<int> findClosestElements(vector<int>& points, int k, int x) {
        priority_queue<vector<int>> heap;
        for(int i=0;i<points.size();i++)
        {
            heap.push({abs(x-points[i]),points[i]});
            if(heap.size()>k)
                heap.pop();
        }
        vector<int> p;
        while(!heap.empty())
        {
            p.push_back(heap.top()[1]);
            heap.pop();
        }
        sort(p.begin(),p.end());
        return p;
    }
};