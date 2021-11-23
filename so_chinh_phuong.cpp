#include <bits/stdc++.h>
using namespace std;

bool soCP(int n){
  int sqr = sqrt(n);
    if(sqr*sqr == n){
        return true;
    }
    else return false;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int k;
        cin >> k;
        int min=0;
        for(int i=1; i<=k;i++ ){
            if(soCP(i)==true){
                min == i;
                
            }
        }
        soCP(k)
    }
}