#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
for(cin>>t;t;t--)
{
	int n;cin>>n;int arr[n];
	for(int  i=0;i<n;i++)
	cin>>arr[i];
	if(n<3)
	{
		cout<<"NO\n";
		continue;	
	}
	if(n==3)
	{
		if(arr[0]==arr[2])
		cout<<"NO\n";
		continue;
	}
	//
	string s;
		for(int i:arr){
			s+= to_string(i);
		}
		
		vector<string>ss;
		for(int i=0;i<n;i++)
		{
			for(int j=3;j<=n-i;j++)
			{
				ss.push_back(s.substr(i,j));
			}
		}
	//
	for(int i=0;i<ss.size();i++)
	cout<<ss[i]<<" ";
	

}
return 0;
}
