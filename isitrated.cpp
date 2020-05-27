#include<bits/stdc++.h>
using namespace std;
int main()
{int n;
cin>>n;
int arr[n][2];
for(int i=0;i<n;i++)
{
	for(int j=0;j<2;j++)
	{
		cin>>arr[i][j];
	}
}
	
	for(int i=0;i<n;i++)
	{
		if(arr[i][0]!=arr[i][1])
		{
			cout<<"rated";
			return 0;
		}
	}

for(int i=0;i<n-1;i++)
{
	if(arr[i][0]<arr[i+1][0])
	{
		
		
		cout<<"\nunrated";
		return 0;
	}
}
	
cout<<"maybe";
return 0;
}
