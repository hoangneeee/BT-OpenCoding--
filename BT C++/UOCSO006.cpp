// UOCSO006 - Cặp số bạn bè
#include <bits/stdc++.h>
using namespace std;

long long sumUocSo(long long n)
{
	if(n<2)
	return 0;
	else
	{
		long long result=0;
        long long x = sqrt(n);
		for(long long i=1; i<=x; i++)
			{
				if(n%i==0)
				{
					result += i + n/i;
				}
			}
			if(x*x==n)
            {
                result = result - x;
            }
			return result-n;
	}
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a,b;
        cin >> a >> b;
        if(sumUocSo(a) == b && sumUocSo(b) == a){
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;

        }

    }
    return 0;
}
