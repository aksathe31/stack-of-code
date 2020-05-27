#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	string ans;

		
	for(int i=0;s[i]!='\0';i++)
	{
		
		if(s[i]>32 && s[i]<65)
		{int r=ans.length()-1;
			while(ans[r]==' ')
			{ans.pop_back();r--;}
			ans.push_back(s[i]);	
			ans.push_back(' ');
		}
		else
		ans.push_back(s[i]);
	}

string realans;
for(int i=0;ans[i]!='\0';i++)
	{
		
		if(ans[i]==' ')
		{int r=realans.length()-1;
			while(realans[r]==' ')
			{realans.pop_back();r--;}
				
			realans.push_back(' ');
		}
		else
		realans.push_back(ans[i]);

	}
cout<<realans;
return 0;
}
