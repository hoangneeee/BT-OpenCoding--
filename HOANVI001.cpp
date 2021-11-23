// HOANVI001 - Liệt kê hoán vị

#include<bits/stdc++.h>
#define ll long long
#define MAX 500000
#define for(i, n) for(int i=1; i<=n; i++)
using namespace std;

int n;
int a[16];

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n; 
        for(i, n) a[i]= i;
        do{
            for(i, n) cout<<a[i]<<(i<n?" ":"\n");
        }while(next_permutation(a+1, a+1+n));
    }
}