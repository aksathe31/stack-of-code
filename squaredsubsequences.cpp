#include<bits/stdc++.h>
using namespace std;
int main()
{

	int t,n,cnt;
	for(cin>>t;t;t--)
	{cnt=0;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		string s;
		for(int i:arr){
			s+= to_string(i);
		}
		//	
		vector<string>ss;
		for(int i=0;i<n;i++)
		{
			for(int j=1;j<=n-i;j++)
			{
				ss.push_back(s.substr(i,j));
			}
		}

		
		vector<string>::iterator it;
		//
		cout<<endl;
		vector<int>products;

		for(it=ss.begin();it<ss.end();it++)
		{
			string temps;
			temps=*it;

			int result=1;
			for(int j=0;j<temps.length();j++)
			{
				result=result*(int(temps[j])-48);			
			}
			

		products.push_back(result);
		
		}
		//


		for(int i=0;i<products.size();i++)
		{
			if((products[i]%4)!=2)
			{	
				cnt++;	
			}
		}		
		cout<<cnt<<"\n";
		

	}	
	return 0;
}
