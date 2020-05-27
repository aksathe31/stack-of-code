#include <bits/stdc++.h>

using namespace std;

vector <int> factors(int x) {
    // We will store all factors in `result`
    vector <int> result;
    int i = 1;
    // This will loop from 1 to int(sqrt(x))
    while(i*i <= x) {
        // Check if i divides x without leaving a remainder
        if(x % i == 0) {
            result.push_back(i);
            // Handle the case explained in the 4th
            if(x/i != i) {
                result.push_back(x/i);
            }
        }
        i++;
    }
    // Return the list of factors of x
    return result;
}

bool is_prime(int n) {
    // Assumes that n is a positive natural number
    // We know 1 is not a prime number
    if (n == 1) {
        return false;
    }

    int i = 2;
    // This will loop from 2 to int(sqrt(x))
    while (i*i <= n) {
        // Check if i divides x without leaving a remainder
        if (n % i == 0) {
            // This means that n has a factor in between 2 and sqrt(n)
            // So it is not a prime number
            return false;
        }
        i += 1;
    }
    // If we did not find any factor in the above loop,
    // then n is a prime number
    return true;
}

int flag=0;
int main() {
    int t;
    for(cin>>t;t;t--)
    {flag=0;
        int x,k;
        cin>>x>>k;
        vector<int>result;
        int xfor=0,kfor=0;
        for(int i=1;i<2147483647;i++)
        {
            result=factors(i);
            xfor=result.size();
	    for(int j=0;j<xfor;j++)
            {
                if(is_prime(result[j]))
                kfor++;
            }
            
            if(x==xfor && k==kfor)
            {
                cout<<"1\n";
		flag=1;
		break;
            }
        }
		
	if(flag==0)
        {
            cout<<"0\n";
        }
            
    }
    return 0;
}
