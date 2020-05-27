#include <iostream>
using namespace std;

// Function to print all distinct combinations of length k
void recur(int arr[], string out, int i, int n, int k)
{
	// invalid input
	if (k > n)
		return;

	// base case: combination size is k
	if (k == 0) {
		cout << out << endl;
		return;
	}
	
	// start from next index till last index
	for (int j = i; j < n; j++)
	{
		// add current element arr[j] to solution & recur for next index
		// (j+1) with one less element (k-1)
		recur(arr, out + " " + to_string(arr[j]) , j + 1, n, k - 1);

		// uncomment below code to handle duplicates
		// while (j < n - 1 && arr[j] == arr[j + 1])
		//	j++;
	}
}

// Find all distinct combinations of given length
int main()
{
	int arr[] = {0,0,0,0,0,0};
	int k = 3;

	int n = sizeof(arr) / sizeof(arr[0]);

	// if array contains repeated elements,
	// sort the array to handle duplicate combinations
	// sort (arr, arr + n);

	// process elements from left to right
	recur(arr, "", 0, n, k);

	return 0;
}
