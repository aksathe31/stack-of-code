#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,a,cnt=0;;
cin>>n>>a;
int arr[n];

for(int i=0;i<n;i++)
cin>>arr[i];

int l,r;
l=r=a-1;

if(arr[a-1])
cnt++;

l--;r++;

while(l>-1 && r<n)
{
	if(arr[l]&&arr[r])
	{
		cnt+=2;
	}
l--;r++;
}
while(l>-1)
{
	if(arr[l])
	cnt++;
l--;
}

while(r<n)
{
	if(arr[r])
	cnt++;
r++;
}

cout<<cnt;
return 0;
}



