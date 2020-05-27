#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int arr[n];int cnt[2]={0};
        
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            cnt[arr[i]%2]++;
        }
        
		if(cnt[1]==0 || (cnt[1]==n &&n%2==0))
		{cout<<"NO\n";}
		else{cout<<"YES\n";}
	
    }
    return 0;
}
