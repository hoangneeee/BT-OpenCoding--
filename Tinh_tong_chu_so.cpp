#include <iostream>
using namespace std; 

int a;
void Rutgon() { 
    int sum=0;
     while (a>0) { 
        sum+=a%10; 
        a/=10; } 
        a=sum; 
} 
int main() { 
    int t; 
    cin>>t; 
    while(t--) { 
        cin>>a; 
        while (a>9){
            Rutgon(); 
        } 
        cout<<a<<endl; 
        } 
}