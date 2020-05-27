#include<bits/stdc++.h>
using namespace std;
int main()
{

int input,x,y;
for(int i=1;i<6;i++)
{
	for(int j=1;j<6;j++)
	{
		cin>>input;
		if(input==1)
		{
			x=i;y=j;
		}
	}
}

	int xdiff=abs(x-3);
	int ydiff=abs(y-3);

cout<<xdiff+ydiff;

return 0;
}
