// GTBT001 - Đa thức tổng
#include <bits/stdc++.h>
using namespace std;

double S(int n, float x)
{
    float sum=0;
    for(int k=1 ;k<=n;k++)
    {
        float sum2=0;
		for(int i=1;i<=k;i++){
			sum2+=i;	
		}
        
        sum+= pow(x,k)/sum2;
    }
    return sum;
}

int main()
{
    int t;
	cin >> t;
	while (t--){
		int n;
        float x;
        cin >> n >> x;
        cout << fixed << setprecision(3) << S(n,x) << endl;
	}
 
}