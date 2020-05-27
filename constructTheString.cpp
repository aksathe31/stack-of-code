#include<bits/stdc++.h>
using namespace std;

int main()
{

char alpha[26];
for(int i=0;i<26;i++)
{
	alpha[i]=i+97;
}

int t,n,a,b;
for(cin>>t;t;t--)
{
	cin>>n>>a>>b;int x;string s;
	for(int i=0;i<n;i++)
	{
		s.push_back(alpha[i%26]);
	}
cout<<s<<"\n";
}


return 0;}
