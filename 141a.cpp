#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;

map<char,int>m;
for(int i=0;i<m.size();i++)
{
cin>>s;
	for(int i=0;i<s.size();i++)
	{
		m[s[i]-97]++;
	}
}

cin>>s;
for(int i=0;i<s.size();i++)
{
	m[s[i]]--;
}


for(int i=0;i<m.size();i++)
{
	if(m[i]!=0)
	{cout<<"NO";return 0;}
}
cout<<"YES";
return 0;
}
