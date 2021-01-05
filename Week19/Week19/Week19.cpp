#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class AdvancedArithmetic {
public:
	virtual int divisorSum(int n) = 0;
};
class Calculator : public AdvancedArithmetic {
public:
	int divisorSum(int n) {
		int sum = 0;
		for (int i = 1; i <= n; i++)
			if (n % i == 0) sum += i;
		return sum;
	}
};

int main() {
	int n;
	cin >> n;
	
	// Declare a pointer to class (new operator)
	// First method
	AdvancedArithmetic *myCalculator = new Calculator();

	// Second method
	/*Calculator Calculator1;
	AdvancedArithmetic *myCalculator;
	myCalculator = &Calculator1;*/

	int sum = myCalculator->divisorSum(n);
	cout << "I implemented: AdvancedArithmetic\n" << sum;
	return 0;
}