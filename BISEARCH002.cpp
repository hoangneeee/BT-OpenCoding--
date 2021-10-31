// BISEARCH002 - Tìm kiếm trong dãy số
#include<bits/stdc++.h>
#define ll long long
#define MAX 500000
using namespace std;

map<int,int> pos;

int main()
{
    int a[MAX],b,i,n,m;
    cin>> n >> m;
    for(i=1;i<=n;i++) 
        cin>>a[i];
    for(i=n;i>=1;i--)
    {
        pos[a[i]]=i; // lưu vị trí nhỏ nhất của a[i] trong mảng a
    }
    while(m--)
    {
        cin>>b;
        cout<<pos[b]<<" ";
    }
    return 0;
}