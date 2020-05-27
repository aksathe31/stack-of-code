#include<bits/stdc++.h>
using namespace std;
int main()
{
int b,n,d,c,u;
cin>>b>>n;
int r[20];
while(b!=0 && n!=0)
{
	for(int i=0;i<b;i++)
	cin>>r[i];

	for(int i=0;i<n;i++)
	{
		cin>>d>>c>>u;
		r[d-1]-=u;
		r[c-1]+=u;
	}

	bool flag=true;
	for(int i=0;i<b;i++)
	{
		if(r[i]<0)
		flag=false;	
	}

	if(flag)
	{cout<<"S\n";}
	else
	{cout<<"N\n";}

cin>>b>>n;
}
return 0;
}
