#include<bits/stdc++.h>
using namespace std;

int chheck(const int a[],int n)
{
	while(--n>0 && a[n]==a[0]);
		return n!=0;
}
int main()
{
	int t,n;
	for(cin>>t;t;t--)
	{
		cin>>n;
		int arr[n];
		for(int i:arr)
		{
			cin>>arr[i];
		}		
	
		if(check(arr,n))
		{
			cout<<"YES\n";
		}
		else
		{
			
		}
		
	}

return 0;
}
