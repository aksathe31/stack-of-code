#include<bits/stdc++.h>
using namespace std;
int main()
{
string s,h="hello";
cin>>s;

string ans;
int j=0,i=0;
while(i<5 && j<s.length())
{
	if(s[j]==h[i])
	{
		ans.push_back(h[i]);
		i++;
	}
	j++;
}

if(ans=="hello")
{
	cout<<"YES\n";
}
else
{
	cout<<"NO\n";
}
return 0;
}

//aahheelllllooo
//hlelo
