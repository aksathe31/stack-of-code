#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;

	int arr[n][n];
for(int i=0;i<n;i++)
cin>>arr[i][0]>>arr[i][1];

	int curr;
	if(arr[0][0]==0)
	{
		curr=0;
	}

for(int i=0;i<n;i++)
{
	if(arr[i][1]>curr && arr[i][0]<=curr)
	{
		curr=arr[i][1];
	}	
//cout<<"\n\ti: "<<i<<" curr: "<<curr;
}
if(curr>=m)
cout<<"YES";
else
cout<<"NO";

return 0;
}
