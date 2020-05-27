#include<bits/stdc++.h>
using namespace std;
int main(){
int n;cin>>n;

double sum=0;
double v;
for(int i=0;i<n;i++)
{
	cin>>v;
	sum+=v;
}

sum/=n;

cout<<sum;
return 0;
}
