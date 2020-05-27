#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;

	int o,t,h,th;
	for(n=n+1;;n++)
	{
	//cout<<"\n\t";
		o=(n%10);
		//cout<<"\no: "<<o<<"\tn: "<<n<<"\t: "<<n;
		
	//cout<<"\n\t";
		t=(n/10)%10;	
		//cout<<"\nt: "<<t<<"\tn/10: "<<n/10<<"\tn: "<<n;
	
	//cout<<"\n\t";
		h=(n/100)%10;
		//cout<<"\nh: "<<h<<"\tn/100: "<<n/100<<"\tn: "<<n;
		
	//cout<<"\n\t";
		th=(n/1000)%10;	
		//cout<<"\nth: "<<th<<"\tn/1000: "<<n/1000<<"\tn: "<<n;
		
	//cout<<"\n\t";
		if(o!=t && o!=h && o!=th && t!=h && t!=th && h!=th)
		{
			cout<<n;
			break;
		}
	}

return 0;

}
