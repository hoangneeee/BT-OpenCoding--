//PROGRAM3
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int N,L;
		cin >> N >> L;
		ll sum1 = N*(L+N+L-1) /2;
	
		ll sum2 = 0;
		for(int i=0; i<N-1; i++)
		{
			int b;
			cin >> b;
			sum2 += b;
		}
		cout << sum1 - sum2 << endl;
	}
	return 0;
}