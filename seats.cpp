// C++ program to find all possible permutations in which n people can occupy r seats in a theater
#include<iostream>
using namespace std;
// Function to find the factorial of the number

int fact(long int x)

{

    long int f=1,i;

    for(i=1;i<=x;i++)

    {

        f=f*i;

    }

    return f;

}

int main()

{

    long int n,r,p,temp;

    long int num,den;

    // Enter the number of seats

    cout << "\nEnter the number of seats available : ";

    cin >> r;

    // Enter the number of people

    cout << "\nEnter the number of persons : ";

    cin >> n;

    // Base condition

    // Swap n and r

    if(n < r)

    {

        temp=n;

        n=r;

        r=temp;

    }

    num=fact(n);

    den=fact(n-r);

    p=num/den;

    cout << "\nNumber of ways people can be seated : ";

    cout << p << endl;

}

