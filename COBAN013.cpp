// COBAN013 - Biến đổi dương
#include<bits/stdc++.h>
#define ll long long
#define MAX 10000
using namespace std;

void res(int a[], int n)
{
    int count = 0;
    for(int i=1; i<n; i++)
    {
        if(a[i]<0)
        {
            count++;
        }
    }
    cout << count << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[MAX];
        int negativeCount = 0;
        int positiveCount = 0;
        bool check = true;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            if(a[i]==0)
            check = false;
            if(a[i]<0)
            negativeCount++;
            if(a[i]>0)
            positiveCount++;
        }
        if(check == false)
            cout << -1 << endl;
        else if(negativeCount > positiveCount)
            cout << positiveCount << endl;
        else
            cout << negativeCount << endl;
    }
    return 0;
}