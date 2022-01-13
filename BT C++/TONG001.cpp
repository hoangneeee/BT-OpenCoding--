// TONG001 - Tổng các số lẻ
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long L,R;
        cin >> L >> R;
        long long sum=0;
        if(L<=R)
        {
            if(L%2==0)
                L++;
            if(R%2==0)
                R--;
            sum+=((L+R)*(((R-L)/2)+1))/2;
        }
        cout << sum << endl;
    }
    return 0;
}