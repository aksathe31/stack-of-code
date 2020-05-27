#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;

int arr[n][n];
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{cin>>arr[i][j];}
}

int per[n];
int freq[n]={-1};
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			freq[arr[i][j]-1]++;
		}	
		int cntr=0;		
		for(int f=0;f<n-1;f++)
		{
			if(freq[f]==freq[f+1])
			cntr++;
		}
		if(cntr==n)
		{
			continue;
		}
		else
		{int mx=INT_MIN,index;
			for(int m=0;m<n;m++)
			{if(mx>freq[m])
			 {
				index=m+1;    			  	
			 }
			}
			
			per[i]=index;
		}
		
	}

int mp=INT_MIN;
for(int i=0;i<n;i++)
{
	if(mp>per[i])
	mp=per[i];
}
for(int i=0;i<n;i++)
{
	if(per[i]==-1)
	{
		per[i]=mp;
		mp++;
	}
}

for(int i=0;i<n;i++)
cout<<per[i]<<" ";
return 0;
}
