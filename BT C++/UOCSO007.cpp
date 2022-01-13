// UOCSO007 - Tổng ước số khác nhau
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll timUoc(ll n, ll m)
{
    ll sum=0,count=0;
    ll A[1000];
    for(ll i = 1; i <= sqrt(n); i++) 
    {
        if(n % i == 0)
        {  
            if(n/i==i){
                A[count]=i;
                count++;
            } else {
                A[count]=i;
                A[count+1]= n/i;
                count+=2;
            }
        }           
    }
    for(ll j = 0; j < count; j++) 
    {
        if(m % A[j] != 0)
        {
           sum+=A[j];
        }
    }

   return sum;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll n,m;
        cin >> n >> m;
        cout << timUoc(n,m) << endl;
	}
	return 0;
}






