// COBAN019 - Biến đổi số
#include<bits/stdc++.h>
#define ll unsigned long long
#define MAX 500000
using namespace std;

ll count(ll n)
{
	if(n<2) return n;
	ll sum = 1 + min(n%3 + count(n/3), n%2 + count(n/2));
	return sum;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		cout << count(n) << endl;
	}
	return 0;
}