#include<bits/stdc++.h>
using namespace std;
int main(){

int k,l,m,n,d;
cin>>k>>l>>m>>n>>d;

vector<int> arr(d+1,0);
long long int sum=0;
for(int i=1;i<=d;i++)
{
	if(k*i<=d)arr[k*i]=1;
	if(l*i<=d)arr[l*i]=1;
	if(m*i<=d)arr[m*i]=1;
	if(n*i<=d)arr[n*i]=1;
}
for(int i=0;i<=d;i++)
{
sum=sum+arr[i];
}
cout<<sum;
return 0;
}
