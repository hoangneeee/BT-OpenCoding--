// LUYTHUA001 - Tính luỹ thừa a mũ n
#include <bits/stdc++.h>
#define MAX 10000
#define ll unsigned int
using namespace std;

//ham xuat
void xuat(ll arr[MAX])
{
    ll i;
    for( i=(MAX-1);i>=0;i--)
    if(arr[i]!=0) break;    
    for(int j=i;j>=0;j--)
    cout << arr[j];
}

//ham tinh a^n
void mu(ll a,ll n)
{
    ll arr[MAX]={0},i,j,k,du=0;
    arr[0]=1;
    if(n>=0)
    {
        for(i=0;i<n;i++){
            for(j=0;j<(MAX-1);j++)
            {
                k=(arr[j]*a+du)/10;
                if(arr[j]*a+du>=10)
                {
                    arr[j]=(arr[j]*a+du)%10;
                    du=k;
                }
                else {
                    arr[j]=(arr[j]*a+du)%10;
                    du=0;
                }
            }
        }
        xuat(arr);
    }
    else {
        xuat(arr);
    }   
}


int main()
{
	int t;
	cin >> t;
	while(t--)
	{
        ll a,n;
        cin >> a >> n;
        if(a==0 && n>0)
        {
            cout << "0";    
        } else {
            mu(a,n);
        }
       
        cout << endl;
	}
	return 0;
}