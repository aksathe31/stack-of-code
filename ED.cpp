#include <bits/stdc++.h>
using namespace std;
vector<string>sall;
// Function to find all Permutations of a given string str[i..n-1]
// containing all distinct characters
void permutations(string str, int i, int n)
{
    // base condition
    if (i == n - 1)
    {
        sall.push_back(str);
        return;
    }

    // process each character of the remaining string
    for (int j = i; j < n; j++)
    {
        // swap character at index i with current character
        swap(str[i], str[j]);        // STL swap() used

        // recur for string [i+1, n-1]
        permutations(str, i + 1, n);

        // backtrack (restore the string to its original state)
        swap(str[i], str[j]);
    }
}
vector<int> sallint;
// Find all Permutations of a string
int main()
{
string str,ckr;
cin>>str>>ckr;
int ckri=stoi(ckr);
    permutations(str, 0, str.length());

for(int i=0;i<sall.size();i++)
{
	sallint.push_back(stoi(sall[i]));
}
int si=sallint.size();
sort(sallint.begin(),sallint.end());
bool flag=true;
for(int i=0;i<sall.size();i++)
{
	if(sallint[i]>ckri)
	{cout<<sallint[i];
		flag=false; 
	break;
	}
}
if(flag)
cout<<-1;
    return 0;
}
