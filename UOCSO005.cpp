// UOCSO005 - Phân tích số
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n,spt,mu,k=0;
        int kq[50000];
        cin >> n;
        spt=0;
        long long int i;
        for (i=2; i<=n; i++)
        {
            mu=0;
            while(n%i==0)
            {
                mu++;
                n=n/i;
            }
            if(mu>0)
            {
                kq[spt++] = i;
                kq[spt++] = mu;
            }
            if(mu>0)
            {
                k++;
            }
        }
        cout << k << endl;
        for (i=0; i<spt; i+=2)
            cout << kq[i] << " " <<kq[i+1] << endl;
    }
    return 0;
}