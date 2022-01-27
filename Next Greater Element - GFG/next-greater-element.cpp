// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long> vec;
        stack<long long> s;
        vector<long long> result;
        for(int i=n-1;i>=0;i--)
        {
            while(!s.empty() && arr[i]>=s.top())
                s.pop();
            
            if(s.empty())
                vec.push_back(-1);
            else
                vec.push_back(s.top());
            
            s.push(arr[i]);
        }
        reverse(vec.begin(),vec.end());
        return vec;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends