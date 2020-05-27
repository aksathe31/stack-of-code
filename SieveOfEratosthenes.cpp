#include<bits/stdc++.h>
using namespace std;
int primes[21000];
void preprocess()
{
	int i,j;
	for(i=2;i<20000;i++)
	primes[i]=1;

	for(i=2;i<20000;i++)
	{
		if(primes[i]==1)
		{
			for(j=2;i*j<20000;j++)
			{
				primes[i*j]=0;				
			}
		}
	}
}

int main()
{preprocess();
	int i,cnt=0;
	for(i=2;i<20000;i++)
	{
		if(primes[i]==1)
		{
			cnt++;
			cout<<i<<" is "<<cnt<<"number prime number\n"; 		
		}
	}
return 0;
}
