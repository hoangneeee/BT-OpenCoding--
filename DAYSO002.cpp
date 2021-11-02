// DAYSO002 - Dãy con K phần tử có tổng bằng S
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
        int k,s;
        cin >> k >> s;
        int count=0;
        int n, dp[50000]={0};
        dp[0]=1;
        for(int i=1;i<=k;i++)
        {
            cin >> n;
            dp[n]=1;
            for(int j=s;j>=n;j--)
            {
                if(dp[j-n]==1 && (j-n)!=n){
                    dp[j]=1;
                    count++;
                } 
            }
        }
        
        if(dp[s]==1) cout << count << endl;
	}
	return 0;
}
