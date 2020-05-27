#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
int flag=0;
	for(cin>>t;t;t--)
	{
	    if(flag==1)
	    {
	        cout<<endl;
	    }
	    if(flag==0)
	    {
	        flag=1;
	    }
	    
	int n,m;
		cin>>n>>m;
		int arrn[n],arrm[n],arr[m]={0};
		for(int i=0;i<n;i++)
		cin>>arrn[i];
		
		for(int i=0;i<n;i++)
		cin>>arrm[i];
		
		for(int i=0;i<n;i++)
		{
			arr[arrn[i]-1]+=arrm[i];
		}
		for(int i=0;i<m;i++)
		{
			if(arr[i]==0)
			{
				arr[i]=INT_MAX;			
			}
		}
		int res=*min_element(arr,arr+m);
		cout<<res;
		
	}

return 0;
}
