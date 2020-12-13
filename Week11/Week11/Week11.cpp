// Week11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
#include <vector>

using namespace std;



int main()
{
	int m, n;
	cin >> m >> n;
	vector<vector<int>> arr(m);
	for (int i = 0; i < m; i++) {
		vector<int> tmp(n);
		for (int j = 0; j < n; j++) {
			cin >> tmp[j];
		}
		arr[i] = tmp;
			 
	}

	int max = -9 * 7;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++) 
		{
			if ((j + 2 < m) && (i + 2 < n)) 
			{
				int sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + \
					arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
				if (sum > max) max = sum;
			}
		}
	}

	cout << max;
	return 0;
}
