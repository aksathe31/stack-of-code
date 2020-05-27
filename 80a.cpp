#include<bits/stdc++.h>
using namespace std;
vector<char>primes;
void es(){

for(int i=0;i<51;i++)
{
primes[i]=true;
}

primes[0] = primes[1] = false;

for(int i=2;i<=50;i++){
    if(primes[i] && (long long)i*i<=50){
        for(int j=i*i;j<=50;j+=i){
            primes[j] = false;
        }
    }
}
}
int main()
{ es;

for(int i=0;i<51;i++)
{
cout<<i<<" "<<primes[i]<<"\n";
}
    long long int a,b;
    cin>>a>>b;
    if(primes[b]){
        for(int i=b-1;i>=a;i--){
            if(primes[i] && i==a){
                cout<<"YES";
                return 0;
            }
        }
    }else{
            cout<<"NO";
            }
    return 0;
}
