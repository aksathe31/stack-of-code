#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
	while(t-->0)
	{
		stack<char>s;
		string arr;int cnt=0;
		cin>>arr;
		for(int i=0;i<arr.length();i++)
		{
			if(arr[i]=='>'&& s.empty())
			{
				break;
			}
			else if(arr[i]=='<')
			{
				s.push(arr[i]);
			}
			else if(arr[i]=='>' && s.top()=='<')
			{
				s.pop();
				cnt=cnt+2;
			}
		}
		cout<<cnt<<"\n";
		
	}
return 0;
}

