#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;long long int n,x;
for(cin>>t;t;t--)
{
	cin>>n;
	if(n==1 || n==2)
	{
		cout<<0<<"\n";
		continue;
	}
	else if(n%2==0)
	{x=(ceil(n/2)-1);
		cout<<x<<"\n";
	}
	else
	{x=(ceil(n/2));
		cout<<x<<"\n";
	}
	
}
return 0;
}
