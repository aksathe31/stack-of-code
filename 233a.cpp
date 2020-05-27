#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
cin >> n;

if(n%2!=0){
	cout<<-1;return 0;
}
else{
	for(int i=2;i<=n;i+=2)
	{
		cout<<i<<" "<<i-1<<" ";
	}
}
return 0;
}
