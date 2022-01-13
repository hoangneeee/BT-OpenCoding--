#include<iostream> 
using namespace std; 
int main(){ 
    long long n, GT=1,sum=0; 
    cin >>n; 
    for(long long i=1;i<=n;i++) { 
        GT=GT*i; 
        sum= sum+GT; } 
        cout<<sum<<endl; 
        
    return 0; 
}