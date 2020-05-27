#include<bits/stdc++.h>
using namespace std;
int main()
{
float t,m,n,f=0;float x;
for(cin>>t;t;t--)
{
	cin>>x>>n>>m;
	if(x<=10 && m>0)
	{
		cout<<"YES\n";
		continue;
	}
	while(n>0)
	{
		x=floor(x/2);
		x=x+10;
		n--;
	}

//	cout<<"\n"<<x<<" "<<n<<" "<<m<<" \n";
	if(x>0)
	{
		if(m>0)
		{	while(m>0)
			{x=x-10;m--;}
		}

	}

//cout<<"\n"<<x<<" "<<n<<" "<<m<<" \n";

if(x<=0)
cout<<"YES\n";
else
cout<<"NO\n";
		

}

return 0;
}
