#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a,b;
        cin>>a>>b;
        int arr[a];
        for(int j=0;j<a;j++)
        {
            cin>>arr[j];
        }
        sort(arr,arr+a);
        int m=0;
        while(b>=0)
        {
            b=b-arr[m];
            m++;
        }
        cout<<"Case #"<<i<<": "<<m-1<<"\n";
        
    }
    
    return 0;
}
