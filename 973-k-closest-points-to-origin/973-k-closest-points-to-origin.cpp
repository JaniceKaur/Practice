class Solution {
public:
    int distance(vector<int> p)
    {
        return (((p[0])*(p[0]))+((p[1])*(p[1])));
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<vector<int>> heap;
        for(int i=0;i<points.size();i++)
        {
            heap.push({distance(points[i]),points[i][0],points[i][1]});
            if(heap.size()>k)
                heap.pop();
        }
        vector<vector<int>> p;
        while(!heap.empty())
        {
        
            p.push_back({heap.top()[1],heap.top()[2]});
            heap.pop();
        }
        return p;
    }
};