#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    for(;t;t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        
        sort(arr,arr+n,greater<int>());
        int i=0;
        int sum=0;
        while(i<n && arr[i]!=0)
        {
            sum=sum+arr[i];
            for(int p=i;p<n;p++)
            {
                if(arr[p]!=0)
                {
                    arr[p]--;
                } 
                if(arr[p]==0)
                break;
            }
        }
        cout<<sum%1000000007<<"\n";
    }
    return 0;
}
