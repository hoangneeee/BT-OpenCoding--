// COBAN020 - Giá trị lớn nhất của tích các chữ số của số không vượt quá N
#include<bits/stdc++.h>
#define ll long int
using namespace std;

ll core(ll n)
{
    ll p=1;
    while(n != 0)
    {
        p = p * (n % 10);
        n = n / 10; 
    } 
    return p;          
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n,max;
        cin >> n;
        if(n>0)
        {
        max=core(n);
        if(max<core(n-1))
        {
            max=core(n-1);
        }
        cout << max << endl;
        }
    }
    return 0;
}