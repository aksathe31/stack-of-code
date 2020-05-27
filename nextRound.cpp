#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,k;
cin>>n>>k;
int nlast=n%10;
int ni_last;
for(int i=1;i<10;i++)
{
	ni_last=(nlast*i)%10;
	if(ni_last==k || ni_last==0)
	{
		cout<<i;
		break;
	}
}

return 0;
}
