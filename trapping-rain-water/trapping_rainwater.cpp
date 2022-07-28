//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        long long ans=0;
        int lt[n];
        int rt[n];
        int units[n];
        lt[0]=arr[0];
        rt[n-1]=arr[n-1];
        for(int i=1;i<n;i++){
            lt[i]=max(arr[i],lt[i-1]);
        }
        for(int i=n-2;i>=0;i--){
            rt[i]=max(arr[i],rt[i+1]);
        }
        for(int i=0;i<n;i++){
            units[i]=min(lt[i],rt[i])-arr[i];
            ans+=units[i];
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends
