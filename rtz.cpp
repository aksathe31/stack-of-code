#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
for(cin>>t;t;t--)
{int cost=0;
int x,y,a,b;
cin>>x>>y>>a>>b;
	
if(x==0 && y==0)
{
cout<<cost<<endl;
continue;
}
else{
	
	int mn=min(x,y);
	cost=mn*b;
	int mx=max(x,y);
	mx=mx-mn;
	cost=cost+(mx*a);
}
	cout<<cost<<endl;
}
return 0;
}
