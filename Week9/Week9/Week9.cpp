#include <iostream> 
#include <string>
#include <sstream>
using namespace std;

// Complete the factorial function below.
int factorial(int n) {
	int result = 1;
	if (n <= 1)
		result = 1;
	else
		result = factorial(n-1) *n;

	return result;
}

int main()
{ 

	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	int result = factorial(n);

	cout << result << "\n";

	 return 0;
}
