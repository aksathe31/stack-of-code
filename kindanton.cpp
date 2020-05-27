#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	for(cin>>T;T;T--)
	{int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int brr[n];
		for(int i=0;i<n;i++)
		{
			cin>>brr[i];
		}
		int i=0;
		if(n==1)
		{

			if(arr[0]==brr[0])
			{
				cout<<"YES\n";
			}
			
			if(arr[0]!=brr[0])
			{
				cout<<"NO\n";
			}		
		continue;		
		}
		for(;i<(n-1);i++)
		{
			
			if(arr[0]!=brr[0])
			{
				cout<<"NO\n";
				break;
			}
			else if(arr[i]==0)
			{
				if(brr[i+1]!=arr[i+1])
				{
					cout<<"NO\n";i++;
					break;
				}
			}
			else if(arr[i]==-1)
			{
				if(brr[i+1]>arr[i+1])
				{
					cout<<"NO\n";i++;
					break;
				}
			}
			else
			{
				if(brr[i+1]<arr[i+1])
				{
					cout<<"NO\n";i++;
					break;
				}			
			}
		}
		if(i==(n-1))
		{
			cout<<"YES\n";
		}
		
	}	

return 0;
}
