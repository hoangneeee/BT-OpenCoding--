//UOCSO008 - Liệt kê các cách phân tích số thành tích các số tự nhiên khác 1
#include<bits/stdc++.h>
#define ll long long
#define MAX 50
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        for(int i=1;i<=n;i++)
        {
            while(n%i==0)
            {
                n/=i;
                cout << i << " ";
            }
        }
        cout << endl;
    }
}