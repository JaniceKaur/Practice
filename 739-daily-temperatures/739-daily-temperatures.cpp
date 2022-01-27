class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        
        int n=arr.size();
        stack<int> s;
        vector<int> vec;
        for(int i=n-1;i>=0;i--)
        {
            while(!s.empty() && arr[i]>=arr[s.top()]){
                s.pop();
            }
            
            if(s.empty())
                vec.push_back(0);
            else
                vec.push_back(abs(i-s.top()));
            
            s.push(i);
        }
        reverse(vec.begin(),vec.end());
        return vec;
    }
};