#include<bits/stdc++.h>
using namespace std; 

// function to count the divisors 
int countDivisors(int n) 
{ 
	int cnt = 0; 
	for (int i = 1; i <= sqrt(n); i++) { 
		if (n % i == 0) { 
			// If divisors are equal, 
			// count only one 
			if (n / i == i) 
				cnt++; 

			else // Otherwise count both 
				cnt = cnt + 2; 
		} 
	} 
	return cnt; 
} 


int maxPrimefactorNum(int N) 
{  
int i, j, Number, isPrime; int cntk=0;
   
 
  	for (i = 2; i <= N; i++)
   	{
     	if(N % i == 0)
        {
   			isPrime = 1;
			for (j = 2; j <= i/2; j++)
			{
				if(i % j == 0)
				{
					isPrime = 0;
					break;
				}
			} 
			if(isPrime == 1)
			{
				cntk++;
			}	          	
		}
   }
  	return cntk;
} 
  
int main()
{
int t;int x,k;
for(cin>>t;t;t--)
{int flag=0;
	cin>>x>>k;
	//cout<<"x :"<<x<<" k: "<<k<<endl;
int i=2;
	for(;i<=100;i++)
	{//cout<<"\n\ti: "<<i<<endl;
		int cntx=countDivisors(i);
		if(cntx==x)
		{ 
			int cntk=maxPrimefactorNum(i);
			//cout<<"cntx :"<<cntx<<" cntk: "<<cntk<<endl;			
			
			if(k==cntk)
			{
				//flag=0;cout<<"flag inside k: "<<flag<<endl;
				cout<<1<<"\n";
				break;			
			}
			else
			{flag=1;
			continue;
			}
		}
		else
		{flag=1;
		continue;
		}	
	}	

		//cout<<"flag outside: "<<flag<<endl;
	if(flag==1 && i==101)
	{
		cout<<0<<"\n";
	}
}
return 0;
}
