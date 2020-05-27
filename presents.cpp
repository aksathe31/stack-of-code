#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
int i=0;
while(i<n)
{
	for(int j=0;j<n;j++)
	{
		if((i+1)==arr[j])
		{
			cout<<j+1<<" "; 
		}
	}
i++;
}

return 0;
}
