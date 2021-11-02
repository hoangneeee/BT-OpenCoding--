// GTBT002 - Biểu thức tổng giai thừa
#include <bits/stdc++.h>
using namespace std;

long long giaiThua(int k)
{
	long long core=1;
	for(int i=1;i<=k;i++)
    {
		core*=i;
	}
	return core;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        float x;
        cin >> n >> x;
        float sum=0;
        for(int k=1;k<=n;k++)
        {
            sum+= pow(x,k)/giaiThua(k);
        }
        cout << fixed << setprecision(3) << sum << endl;
        
    }
    return 0;
}