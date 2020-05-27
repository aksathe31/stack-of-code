#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c;
cin>>a>>b>>c;
if(c==0)
{
	if(a==b)
	cout<<"YES";
	else cout<<"NO";

return 0;
}
int n=(b/c)+(b%c!=0);
if(c<0)
n++;

cout<<"\nn: "<<n;
bool flag=true;
while(n--)
{
	if(a==b){
	cout<<"YES";
	flag=false;
	break;
	}	
	a=a+c;
cout<<"\na: "<<a;
}
if(flag)
cout<<"NO";
return 0;
}
