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
	int req[(q*2)+1];
	req[0]=0;
	for(int i=1;i<=(q*2);i++)
	cin>>req[i];

	for(int i=0;i<(q*2);i++)
	{
		sum+=abs(req[i+1]-req[i]);
	}
	cout<<sum<<"\n";

}
return 0;
}
