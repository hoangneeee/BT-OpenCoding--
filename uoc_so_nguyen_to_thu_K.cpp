#include<iostream>
using namespace std;
int main(){ 
    int t; 
    cin >> t; 
    while(t--){ 
        long long n, 
        i = 2; 
        int a = 0, k; 
        cin >> n >> k; 
        while(n != 1){ 
            if( n % i == 0){ 
                a++; 
                if( a == k){ 
                    cout << i << endl; 
                }else{ 
                    n = n /i; } 
            }else { 
                i++; } 
        } if( k > a){ 
            cout << "-1" << endl; 
        } 
        } 
    }