// TONG005 - Số các bộ số có tổng bằng S
#include <bits/stdc++.h>
#define ll long long 
#define MAX 500000
using namespace std;

void res(int k, int s)
{
    if(s==3*k)
    {
        cout << 1 << endl;
    }
    else
    {
        int count = 0;
        for(int i=0; i<=k; i++)
        {
            int x = min(k,s-i);
            for(int j=0; j<=x; j++)
            {
                if(S - (i + j) <= k && s -(i + j) >=0)
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
}
int  main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int k,s;
        cin >> k >> s;
        res(k,s);
    }
    return 0;
}