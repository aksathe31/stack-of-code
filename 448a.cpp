#include<bits/stdc++.h>
using namespace std;
int main()
{
int c,m,n;
c=0;
m=0;
int x;
int ncr=0;
int nmr=0;
for(int i=0;i<3;i++)
{cin>>x;
c=c+x;}
for(int i=0;i<3;i++)
{cin>>x;
m=m+x;}

cin>>n;
	ncr = c/5 + (c % 5 != 0);    
	nmr = m/10 + (m % 10 != 0);
//ncr=ceil(c/5);
//nmr=ceil(m/10);


cout<<"\nc: "<<c<<"\tncr: "<<ncr;
cout<<"\nm: "<<m<<"\tnmr: "<<nmr;

if(ncr+nmr<=n)
cout<<"YES\n";
else
cout<<"NO\n";
return 0;
}
