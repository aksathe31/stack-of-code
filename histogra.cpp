#include<bits/stdc++.h>
using namespace std;
int main()
{int n;scanf("%d",&n);
	while(n)
	{//cout<<"\n\tn: "<<n<<endl;
		long long int arr[n];
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&arr[i]);
		}
		long long int area[n];
	/*cout<<"\n";		
	for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
	cout<<"\n";*/
		for(int i=0;i<n;i++)
		{
			int l=0,r=0;
			int lci=i,rci=i;
		//cout<<"lci: "<<lci<<" rci: "<<rci;
		//	cout<<"\n";			
			while(arr[i]<=arr[lci] && lci>-1)
			{
				l++;
				lci--;
			}
			
			while(arr[i]<=arr[rci] && rci<n)
			{
				r++;
				rci++;
			}
			
		//cout<<"l: "<<l<<" r: "<<r;
		//cout<<"\n";

			area[i]=(l+r-1)*arr[i];
	
		//cout<<"area[i]: "<<area[i];
		//cout<<"\n";
		}

		//for(int i=0;i<n;i++)
		//cout<<area[i]<<" ";

		
		//cout<<"\n"; 
		long long int m=*max_element(area,area+n);
		printf("%lld\n",m);
	scanf("%d",&n);	
	}
	return 0;
}
