 
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	int N;
	string tmp;

	getline(cin, tmp);
	N = stoi(tmp); 

	if (N % 2 != 0) cout << "Weird";
	else {
		if (N <= 5) cout << "Not Weird";
		else if (N <= 20) cout << "Weird";
		else cout << "Not Weird";
	}
	return 0;
}