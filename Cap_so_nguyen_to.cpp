#include <iostream>
#include<math.h>
using namespace std;
int check(long long a){
    if(a<2) return 0;
    else{
        for(int i=2;i<=sqrt(a);i++)
        {
            if(a%i==0) return 0;
        }
    } 
    return 1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin>>n;
        for(int i=2;i<=n;i++){
            if(check(i)==1 &&check(n-i)==1){
                long long x1,x2;
                long long sum=0;
                x1=i;
                x2=n-i;
                sum=x1+x2;
                if(sum==n){
                    cout << x1 << " " << x2;
                    break;
                }
            }
        }
        cout << endl;
    }
  return 0;
}