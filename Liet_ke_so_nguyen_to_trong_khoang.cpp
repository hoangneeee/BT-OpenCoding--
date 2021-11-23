#include <iostream>
#include<math.h>
using namespace std;
int check(int n){
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
    int t;
    cin >> t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        for(int i=a;i<=b;i++)
        {
            if(check(i)==1) cout<<i<<" ";
        }
        cout << endl;
    }
   
  return 0;
}