#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
     cin>>arr[i];
    }
    int x;int cnt=0;
    for(int i=0;i<n;i++)
	{
	    x=arr[i];
	    for(int j=i;j>-1;j--)
	    {
	        if(arr[i]==arr[j] && i!=j)
	        {
	            arr[j]=-1;
	            cnt++;
	        }
	    }
	}
    int uni[n-cnt];
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=-1)
        uni[i]=arr[i];
    }

        return 0;
}
