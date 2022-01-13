// COBAN005 - Hàm mũ số lớn
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll MOD = 1e9 + 7;

ll tinh(ll x, ll n)
{
	ll res = 1;
	while (n) {
		if (n & 1)
			res = res * x % MOD;
		n = n / 2;
		x = x * x % MOD;
	}
	return res;
}
//cong thuc lay MOD
ll tinhMOD(string sa, string sb)
{
	ll a = 0, b = 0;

	for (int i = 0; i < sa.length(); i++)
		a = (a * 10 + (sa[i] - '0')) % MOD;

	for (int i = 0; i < sb.length(); i++)
		b = (b * 10 + (sb[i] - '0')) % (MOD - 1);
	return tinh(a, b);
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin.ignore();
		string sa,sb;
		cin >> sa >> sb;
		cout << tinhMOD(sa, sb) << endl;
	}
	return 0;
}