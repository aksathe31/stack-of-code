#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
for(;t;t--)
{
float n;
cin>>n;

int i=2;
bool flag=true;
float af=n/((2^i)-1);
while((af<n))
{
 af=n/((2^i)-1);
	//if()
	//{
		cout<<af<<endl;//flag=false;
	//}
	i++;
}

}

return 0;
}
