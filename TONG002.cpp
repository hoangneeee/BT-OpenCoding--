// TONG002 - Tổng dãy số liên tiếp
#include <iostream>
using namespace std; 

int main() { 
    int t; 
    cin>>t; 
    while(t--) {
        long long L,R;
        long long sum=0;
        cin>>L>>R; 
        sum=((L+R)*(R-L+1))/2;
        cout << sum << endl;
    } 
} 