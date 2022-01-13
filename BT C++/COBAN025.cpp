//COBAN025 - SỐ CATALAN THỨ N
#include<bits/stdc++.h>
#define ll long long
#define MAX 500000
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		vector <ll> v(n + 1);
			v[0] = 1;
		for(int i = 1; i <= n; i++)
		{
			for(int j = 0; j < i ; j++)
				v[i] += (v[j] * v[i - 1 - j]);
		}
		cout << v[n] << endl;
	}
	return 0;
}