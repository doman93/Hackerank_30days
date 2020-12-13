#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
	int N;

	cin >> N;

	// First solution  //======================================
	//for (int i = 1; i < N; i++)
	//{
	//	string S;
	//	cin >> S;
	//	for (int j = 0; j < S.length(); j++)
	//	{
	//		if (j % 2 == 0) cout << S[j];
	//	}
	//	cout << " ";
	//    for (int j = 0; j < S.length(); j++)
	//	{
	//		if (j % 2 != 0) cout << S[j];
	//	}
	//	cout << endl;
	//}


	// Second solution //======================================
	int i = 1;
	while (i < (N+1))
	{
			string S;
			cin >> S;
			for (int j = 0; j < S.length(); j++)
			{
				if (j % 2 == 0) cout << S[j];
			}
			cout << " ";
			for (int j = 0; j < S.length(); j++)
			{
				if (j % 2 != 0) cout << S[j];
			}
			cout << endl;

			i++;
	}
	
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	return 0;
}