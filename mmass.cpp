#include<bits/stdc++.h>
using namespace std;
int main()
{stack<int>stk;
	string s;
	cin>>s;

for(int i=0;i<s.length();i++)
{
	if(s[i]=='(')
	{
		stk.push(-1);
	}
	else if(s[i]==')')
	{
		int x=0;
		while(stk.top()!=-1)
		{
			x+=stk.top();
			stk.pop();	
		}
		stk.pop();
		stk.push(x);		
	}
	else if(isdigit(s.at(i)))
	{int x=0;
		x=stk.top();
		stk.pop();
		x=(x*((s.at(i))-48));
		stk.push(x);
	}
	else if(isalpha(s.at(i)))
	{
		if(s.at(i)=='C')
		stk.push(12);
		
		if(s.at(i)=='H')
		stk.push(1);
		
		if(s.at(i)=='O')
		stk.push(16);	
	}
}

int sum=0;

while(!stk.empty())
{
	sum=sum+stk.top();
	stk.pop();
}
cout<<sum<<endl;
	return 0;
}

