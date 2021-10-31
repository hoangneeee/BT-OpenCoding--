// COBAN009 - Đếm số chữ số
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >>t;
    while(t--)
    {   
        string n;
        cin >> n;
        int count=0;
        if(n[count]=='-'){
            while(n[count]!='\0'){
                count++;
            }
            cout << (count -1) << endl;   
        } else {
            while(n[count]!='\0')
                count++;
                cout << count << endl;

        }
        
    }
    return 0;
}