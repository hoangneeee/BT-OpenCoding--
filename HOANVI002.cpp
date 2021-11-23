// HOANVI002 - Hoán vị thần kỳ
#include<bits/stdc++.h>
#define ll long long
#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define N 1000111
using namespace std;

int n, k;
int a[N];
bool b[N];

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        
        cin >> n >> k; 
        FOR(i, 1, n) a[i]= i;
	
        if (k==0) FOR(i, 1, n) cout<<a[i]<<" ";
        else if (n%2) cout<<-1;
        else{
            int i= 1;
            while(1){
                if (b[i]==false && i+k<=n){
                    swap(a[i], a[i+k]);
                    b[i]= true;
                    b[i+k]= true;
                }
                else 
                    if (b[i]==true) i++;
                    else break;
            }
            if (count(b+1, b+1+n, false)) cout<<-1;
            else
                FOR(i, 1, n) cout<<a[i]<<" ";
        }
        cout << endl;
    }
	return 0;
}