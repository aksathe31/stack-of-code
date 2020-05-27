#include<bits/stdc++.h>
using namespace std;
int t,n;
long long int s[100005];
int main(){
cin>>t;
while(t--){
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}

	long long int cnt=0;

	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(s[i]<s[j] && (j+1)%(i+1)==0)
			{cnt++;}
		}
	}
cout<<cnt+1<<"\n";
}

return 0;
}
