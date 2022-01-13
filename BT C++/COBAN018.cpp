// COBAN018 - Ước luỹ thừa 2 lớn nhất

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n,s=0;
        cin >> n;
        ll dem=1;
        for (ll i = 2;i <= n;i*=2)
        {
            
            s+=dem++ * ((n/i + 1)/2);
        }
        cout << s << endl;
    }
    return 0;
}