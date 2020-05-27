#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;

string h,l,it,that;
it="it";
that="that ";
h="I hate ";
l="I love ";
if(n==1)
{cout<<"I hate it";
return 0;
}
for(int i=0;i<n;i++)
{
	if(i%2==0)
	cout<<h;
	else
	cout<<l;	
	
	if(i<(n-1))
	cout<<that;	
	
}
cout<<it;

return 0;
}
