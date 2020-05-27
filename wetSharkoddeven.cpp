#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;

long long int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];

sort(arr,arr+n);

long long int sum=0;
sum=accumulate(arr,arr+n,sum);
int i=0;
while(sum%2==1)
{
	if(arr[i]%2==1)
	{sum=sum-arr[i];}
	i++;
}
cout<<sum;


return 0;
}
