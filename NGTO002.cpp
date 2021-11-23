// NGTO002 - Đếm số nguyên tố
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll L,R;
        cin >> L >> R;
        ll count=0;
        bool mark[R + 1];
        if(L<=R)
        {
        // Khởi tạo tất cả các số [2...N] đều là số nguyên tố
        for (ll i = 2; i <= R; i++) {
            mark[i] = true;
        }

        for(ll i = 2; i <= R; i++) {
            if (mark[i]) {
                 // Xuất phát từ i*i vì các hợp số trước đó đều đã bị đánh dấu
                for(ll j = i*i; j <= R; j+=i) {
                    mark[j] = false;
                }
            }
        }
        for(ll i = 2; i <= R; i++) {
            if (mark[i]==true)
                if(L<=i)
                    count++;
        }
        cout << count << endl;
        }
    }    
    return 0;
}