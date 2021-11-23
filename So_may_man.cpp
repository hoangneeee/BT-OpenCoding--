#include <iostream>
using namespace std; 

int main() { 
    int t; 
    cin>>t; 
    while(t--) { 
        int a;
        cin>>a;
        int x;
        x=a%100;
        if(x==86){
            cout << "1";
        } else {
            cout << "0";
        }
        cout << endl;
    }
}