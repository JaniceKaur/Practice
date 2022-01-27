class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
        vector<int> vec;
        int n=arr.size();
        stack<int> s;
        vector<int> result;
        for(int i=2*(n-1);i>=0;i--)
        {
            while(!s.empty() && arr[i%n]>=s.top())
                s.pop();
            
            if(i<n)
            {if(s.empty())
                vec.push_back(-1);
            else
                vec.push_back(s.top());}
            
            s.push(arr[i%n]);
        }
        reverse(vec.begin(),vec.end());
        return vec;
    }
};