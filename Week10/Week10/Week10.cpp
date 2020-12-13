// Week10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;


#define base 2 
int main() {
	int n;
	cin >> n;

	vector<int> arr;
	int sum = 0;
	int max = 0;

	while (n > 0) {
		if (n % base == 1) {

			sum++;

			if (sum > max) max = sum;
			arr.push_back(1);
		}
		else
		{
			sum = 0;
			arr.push_back(0);
		}
		n = n / base;
		cout <<  n << endl;

	}

	cout << " \n Number of 1 consecutive existence: " << max << endl;
	cout << base << "-base presentation:" << endl;
	for (auto i = arr.rbegin(); i != arr.rend(); ++i)
		cout << *i ;

	return 0;
}