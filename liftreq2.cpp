#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;cin>>t;
int n,q;
for(;t;t--)
{
	cin>>n>>q;
	int sum=0;
	int building[n+1];
	
int lift=0,fi;
int req=q*2;
while(req--)
{
	cin>>fi;
	sum+=abs(lift-fi);
	lift=fi;
}
	cout<<sum<<"\n";

}
return 0;
}
