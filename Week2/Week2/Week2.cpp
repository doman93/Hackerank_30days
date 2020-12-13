#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent);

int main()
{	
	string tmp;

	getline(cin, tmp);
	double meal_cost = stod(tmp);

	getline(cin, tmp);
	int tip_percent = stoi(tmp);

	getline(cin, tmp);
	int tax_percent = stoi(tmp);

	solve(meal_cost, tip_percent, tax_percent);

	return 0;
}

void solve(double meal_cost, int tip_percent, int tax_percent) {
	int total_cost = 0;
	double tip_cost = tip_percent * meal_cost / 100;  // Product before devide if not wrong answer
	double tax_cost = tax_percent * meal_cost / 100;
	total_cost = (int)round(meal_cost + tip_cost + tax_cost);
	cout << total_cost << endl;

}
