#include <iostream>
#include<math.h>
using namespace std;
int check(long long n){
    if(n<2) return 0;
    else{
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0) return 0;
        }
    }
    return 1;
}

int main(){
        long long a,b;
        int min,max;
        if(a>0 && b>0){
            cin>>a>>b;
            if(a>b){
                min=b;
                max=a;
            } 
            if(a<b) {
                min=a;
                max=b;
            }
            for(int i=min;i<=max;i++){
                    if(check(i)==1) cout<<i<<" ";
                }
        }
    return 0;
}