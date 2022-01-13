// MATRAN001 - Đường đi lớn nhất
#include<bits/stdc++.h>
#define ll long long
#define MAX 500000
using namespace std;

#define min INT_MIN

int main()
{
    int t;
    cin >> t;
    while(t--){
        // n la so hang
        // m la so cot
        int n,m;
        cin >> n >> m;
        int a[n+10][m+10];
        for(int i=1; i<=n; i++)
        {
            a[i][0] = min;
            a[i][m+1] = min;
        }
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                cin >> a[i][j];
            }
        }

        /*
        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=m+1; j++)
            {
                cout << a[i][j] << "\t";
            }
            cout << endl;
        }
        */
        
        for(int i=2; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                a[i][j] += max(a[i-1][j-1],max(a[i-1][j],a[i-1][j+1]));
            }
        }
        int result = min;
        for(int j=1; j<=m; j++)
        {
            if(result<a[n][j])
            result = a[n][j];
        }
        cout << result << endl;
    }
    return 0;
}