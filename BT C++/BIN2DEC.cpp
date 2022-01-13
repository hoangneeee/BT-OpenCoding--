// BIN2DEC - Chuyển đổi nhị phân sang thập phân
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

//chuyen nhi phan sang thap phan
ll binToDec(string n)
{
    string num = n;
    ll dec= 0;
 
    //khởi tạo giá trị core thành 1, tức là 2 ^ 0
    ll core = 1;
 
    ll length = num.length();
    for (ll i = length - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec += core;
        core = core * 2;
    }
 
    return dec;
}

int  main()
{
    unsigned int t;
    cin >> t;
    while(t--)
    {
        string n;
        cin >> n;
        cout << binToDec(n) << endl;
    }
    return 0;
}