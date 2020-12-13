#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int n, q;
	int size;
	int i, k;
	cin >> n >> q;
	vector<vector<int>> arr(n);
	for (i = 0; i < n; i++)
	{

		cin >> size;
		vector<int> tmp(size);
		for (k = 0; k < size; k++)
		{
			cin >> tmp[k];

		}
		arr[i] = tmp;

	}

	for (i = 0; i < q; i++)
	{
		int r, s;
		cin >> r >> s;
		cout << arr[r][s] << endl;
	}

	return 0;
}

//int main()
//{ 
//	int n,q;
//	cin>>n>>q;
//	int** seq=new int* [n];
//	for(int i=0;i<n;i++)
//    {
//      int a;
//      cin>>a;
//      int* b=new int [a];
//      for(int j=0;j<a;j++)
//        {
//          int e;
//          cin>>e;
//          b[j]=e;
//        }
//    *(seq+i)=b;
//	}
//
//	for(int i=0;i<q;i++)
//	{
//	  int r,s;
//	  cin>>r>>s;
//	  cout<<seq[r][s]<<endl;
//	}
//}