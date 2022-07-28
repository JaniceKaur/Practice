class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector <int> nsr,nsl;
        stack<pair<int,int>> s;
        vector<int> res;
        // aim is. to calculate nsr index and nsl index for each index/each bulding in heights array
        for(int i=0;i<n;i++){
            while(!s.empty() && s.top().first>=heights[i]){
                s.pop();
            }
            if(s.empty())
                nsl.push_back(-1);
            else
                nsl.push_back(s.top().second);
                
            s.push({heights[i],i});
        }
        // reusing the same stack : remove if there are any elements in the stack
        while(!s.empty()){
            s.pop();}
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && s.top().first>=heights[i]){
                s.pop();
            }
            if(s.empty())
                nsr.push_back(n);
            else
                nsr.push_back(s.top().second);
                
            s.push({heights[i],i});
        }
        reverse(nsr.begin(),nsr.end());
        for(int i=0;i<n;i++){
            res.push_back((nsr[i]-nsl[i]-1)*heights[i]);
        }
        
        return *max_element(res.begin(),res.end());
    }
};