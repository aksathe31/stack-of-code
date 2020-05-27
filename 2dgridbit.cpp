#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int T;
for(cin>>T;T;T--)
{
int n,m;
cin>>n>>m;
string s;
int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>s;
		arr[i]=count(s.begin(), s.end(), '1');					
	}

	int sum=0;
	int j=0;
	for(int i=0;i<n-1;i++)
	{	j=i+1;
		if(arr[j]==0)
		{
			j++;
			sum=sum+(arr[i]*arr[j]);
			i++;	
		}
		else{
		sum=sum+(arr[i]*arr[j]);
		}	
	}
cout<<sum<<endl;
}
return 0;
}
