#include<bits/stdc++.h>
using namespace std;
//  method returns Nth power of A 
 long double nthRoot( long long int A, long long int N) 
{ 
    // intially guessing a random number between 
    // 0 and 9 
     long double xPre = rand() % 10; 
  
    //  smaller eps, denotes more accuracy 
     long double eps = 1e-3; 
  
    // initializing difference between two 
    // roots by INT_MAX 
     long double delX = INT_MAX; 
  
    //  xK denotes current value of x 
     long double xK; 
  
    //  loop untill we reach desired accuracy 
    while (delX > eps) 
    { 
        //  calculating current value from previous 
        // value by newton's method 
        xK = ((N - 1.0) * xPre + 
              ( long double)A/pow(xPre, N-1)) / ( long double)N; 
        delX = abs(xK - xPre); 
        xPre = xK; 
    } 
  
    return xK; 
} 
  
//    Driver code to test above methods 
int main() 
{ 
	
    long long int N = 17; 
     long long int A; 
  cin>>A;
    long double nthRootValue = nthRoot(A, N); 
    cout << "Nth root is " << nthRootValue << endl; 
  
    /* 
        double Acalc = pow(nthRootValue, N); 
        cout << "Error in difference of powers " 
             << abs(A - Acalc) << endl; 
    */
  
    return 0; 
} 
