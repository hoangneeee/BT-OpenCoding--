NGTO003 - Nguyên tố tổng
#include<bits/stdc++.h>
#define ll long long
#define MAX 500000
using namespace std;

bool ngTo(ll n)
{
	if (n <= 1) return false;
	if (n <= 3 && n>1) return true;
	if (n%2 == 0 || n%3 == 0) return false;

	for (ll i = 5; i*i<=n; i+=6)
		if (n%i == 0 || n%(i+2) == 0)
		return false;

	return true;
}

bool check(ll N)
{
    if (ngTo(N) && ngTo(N - 2))
        return true;
    else
        return false;
}

ll ngToKeTiep(ll N)
{
	if (N < 5)
		return 5;
	ll ngTo = N;
	bool found = false;
	while (!found) {
		if(ngTo%2==0)
		ngTo++;
		if ( ngTo ( ngTo ) && check( ngTo ))
			return ngTo;
			else
				ngTo+=2;
			
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		cout << ngToKeTiep(n) << endl;
	}
	return 0;
}