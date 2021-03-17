// C++ Implementation to print the pattern
#include <bits/stdc++.h>
using namespace std;

// Function definition
void print(int n)
{
	int var1 = 1, var2 = 1;

	// Outer for loop to keep
	// track of number of lines
	for (int i = 0; i < n; i++) {
		// for loop to keep track
		// of spaces
		for (int j = n - 1; j > i; j--) {
			cout << " ";
		}

		// for loop to print the
		// digits in pattern
		for (int k = 1; k <= var1; k++) {
			cout << abs(k - var2);
		}

		var1 += 2;
		var2++;
		cout << "\n";
	}
}

// Driver code
int main()
{
	// taking size from the user
	int n = 5;

	// function calling
	print(n);
	
	return 0;
}
