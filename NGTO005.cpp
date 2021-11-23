// NGTO005 - Tổng ước nguyên tố lớn nhất của các số không vượt quá N
#include <bits/stdc++.h>
#define ll long long
#define MAX 500000
using namespace std;

ll res(ll n)
{
	int ngTo[n+1];
	ll sum = 0,max = n / 2;
	memset(ngTo, 0, sizeof(ngTo));

	for (ll p=2; p<=max; p++)
	{
		if (ngTo[p] == 0)
		{
			for (ll i=p*2; i<=n; i += p)
				ngTo[i] = p;
		}
	}

	for (ll p=2; p<=n; p++)
	{
		if (ngTo[p])
			sum += ngTo[p];
					
		else
			sum += p;
	}
	return sum;	
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		cout << res(n) << endl;
	}
	return 0;		
}