#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n) {

    if (n == 1) {
        return false;
    }

    int i = 2;

    while (i*i <= n) {
        
        if (n % i == 0) {
            return false;
        }
        i += 1;
    }
    return true;
}


int t;
int main(){
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
int fn;

for(int j=0;j<k;j++){
	if(n%2==0)
	{
		fn=2;
		n=n+(k*fn);	
	}
	else if(!is_prime(n))
	{
			for(int i=3;i<=n;i+=2){
			if(n%i==0)
			{
				n=n+i;
				break;
			}
		}		
	}
	else
	{
	
			fn=n;
			n+=fn;
	}
}
cout<<n<<"\n";
}
return 0;
}
