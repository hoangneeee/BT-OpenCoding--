#include <iostream>
using namespace std; 

int main() { 
    int t; 
    cin>>t; 
    while(t--) {
        long long a;
        long long sum=0;
        cin>>a; 
        for(long long i=1;i<=a;i++){
            sum=(a+1)*a/2;
        }
        cout << sum << endl;
    } 
}