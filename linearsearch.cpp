#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x,flag=0;
    cin>>x;
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            cout<<x<<" found at "<<i<<" index"<<endl;
            flag=1;
            break;
        }
    }
    if(!flag)
    cout<<x<<" not found"<<endl;

}