#include<bits/stdc++.h>
using namespace std;
int main()
{
int len;
cin>>len;

char store[2000001];
while(len){

int min=2000001;
for(int i=0;i<len;i++)
cin>>store[i];

bool f=true;
for(int i=0;i<len;i++)
{
if(store[i]=='Z')
{
	min=0;
	f=false;
}

}
if(f){
for(int i=0;i<len;i++)
{
	if(store[i]=='D')
	{	
		for(int j=i;j<len;j++)
		{
			if(store[j]=='R')
			{
			int comp=(i-j);
			if(comp<0)comp*=-1;
				if(min>comp)
				{
					min=comp;			
				}
				break;
			}
		}	
		for(int j=i;j>-1;j--)
		{
			if(store[j]=='R')
			{		
			int comp=(j-i);
			if(comp<0)comp*=-1;
				if(min>comp)
				{min=comp;}
				break;
			}	
		}
		
	}
}
}

cout<<min<<"\n";


cin>>len;
}
return 0;
}
