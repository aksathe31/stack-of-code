#include<bits/stdc++.h>
using namespace std;
char ans;
int main()
{
unsigned long long int n,d,x=1;
do{
cout<<"\n\tenter n and d: ";

cin>>n>>d;
cout<<"\tn"<<"%"<<"d= "<<n%d<<endl;;
cout<<"\n\tWant again? (y/n) ";

cin>>ans;
}while(ans=='y');

return 0;
}
