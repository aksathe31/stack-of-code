#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
string s;
cin>>s;
int arr[27]={0};
arr[0]=1;
for(int i=0;i<s.length();i++)
{
	if(s[i]>64 && s[i]<91)
	{
		arr[s[i]-64]++;
	}
	if(s[i]>96 && s[i]<123)
	{
		arr[s[i]-96]++;
	}
}

for(int i=0;i<27;i++)
{
if(arr[i]==0)
{cout<<"NO";return 0;}
}
cout<<"YES";

return 0;
}
