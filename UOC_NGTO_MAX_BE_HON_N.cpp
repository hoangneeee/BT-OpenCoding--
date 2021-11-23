//Ước nguyên tố lớn nhất bé hơn N
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, dem;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for (ll i = n; i >= 2; i--)
        {
            dem = 0;
            for (ll j = 2; j <= sqrt(i); j++)
            {
                if (i % j == 0)
                {
                    dem = dem + 1;
                    break;
                }
            }
            if (dem == 0)
            {
                cout << i;
                break;
            }
        }
        cout << endl;
    }
    
    return 0;
}
