#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;

	int n;	
	cin>>t;
for(;t;t--)
{
	cin>>n;
	int p[n],c[n];
	for(int j=0;j<n;j++)
	cin>>p[j]>>c[j];
	
	if(p[0]<c[0])
	{
		cout<<"NO\n";
		continue;
	}
	int i=1;		
	for(;i<n;i++)
	{
		if(p[i]<p[i-1] || p[i]<c[i] || c[i]<c[i-1] || p[i]<c[i-1] || (p[i]-p[i-1])<(c[i]-c[i-1]))
		{
			cout<<"NO\n";
			break;				
		}
		else
		{
			p[i-1]=p[i];
			c[i-1]=c[i];
		}
	}
	if(i==n)
	{
		cout<<"YES\n";
	}	
}

return 0;
}
