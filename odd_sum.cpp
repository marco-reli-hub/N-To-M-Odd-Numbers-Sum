// 5. Write a code that will get the sum of all odd numbers from N to M.

#include <iostream>
using namespace std;

int main() 
{
	int min_limit, max_limit, sum = 0;

	cout << "Enter the smallest number: ";
	cin >> min_limit;
	cout << "Enter the largest number: ";
	cin >> max_limit;

	cout << endl << "Odd numbers from " << min_limit << " to " << max_limit << ":" << endl;
	for (int minimum = min_limit; minimum <= max_limit; minimum++) {
		if (minimum % 2 != 0) {
			cout << minimum << "  ";
			sum = sum + minimum;
		}
	}
	cout << endl << "Sum: " << sum << endl;

	return 0;
}
