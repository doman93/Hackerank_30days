#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm> 

using namespace std;

vector<string> split_string(string);
 

int main()
{
	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	string arr_temp_temp;
	getline(cin, arr_temp_temp);

	vector<string> arr_temp = split_string(arr_temp_temp);

	vector<int> arr;
	arr.resize(n);

	for (int i = 0; i < n; i++) {
		int arr_item = stoi(arr_temp[n-1-i]);

		arr[i] = arr_item;
		cout << arr[i] << " ";
	}
 
 
	//for (auto i = arr.rbegin(); i != arr.rend(); i++) {
	//	cout << *i << " ";
	//}

	return 0;
}

vector<string> split_string(string input_string) {
 

	while (input_string[input_string.length() - 1] == ' ') {
		input_string.pop_back();
	}

	vector<string> splits;
	char delimiter = ' ';

	size_t i = 0;
	size_t pos = input_string.find(delimiter);

	while (pos != string::npos) {
		splits.push_back(input_string.substr(i, pos - i));

		i = pos + 1;
		pos = input_string.find(delimiter, i);
	}

	splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

	return splits;
}
 