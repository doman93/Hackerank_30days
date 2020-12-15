#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int N;
	cin >> N;
	vector<int> X;
	int num;
	for (int i = 0; i < N; ++i) {
		cin >> num;
		X.push_back(num);
	}
	int Q;
	cin >> Q;
	for (int i = 0; i < Q; ++i) {
		int tmp;
		cin >> tmp;
		vector<int>::iterator low = lower_bound(X.begin(), X.end(), tmp);
		if (X[low - X.begin()] == tmp)
			cout << "Yes " << (low - X.begin() + 1) << endl;
		else
			cout << "No " << (low - X.begin() + 1) << endl;
	}
	return 0;
}
