// BDSO008 - Biểu diễn số thành tổng của các số chẵn
#include<bits/stdc++.h>
#define ll long long
#define MAX 500000
using namespace std;

const int MOD = 1e9 + 7;

ll power(int x, unsigned int y, int p)
{
    ll res = 1;      
    x = x % p;  
    while (y > 0)
    {
        if (y & 1)
            res = (1LL * res * x) % p;
        y = y>>1; 
        x = (1LL * x * x) % p;
    }
    return res;
}
 
ll countEvenWays(ll n)
{
    return power(2, n/2 - 1, MOD);
}
 
int main()
{
	int t;
	cin >> t;
	while (t--)
    {
        ll n;
        cin >> n;
        if(n%2)
        {
            cout << -1 << endl;
        } else {
            cout << countEvenWays(n) << endl;
        }
	}
   return 0;
}