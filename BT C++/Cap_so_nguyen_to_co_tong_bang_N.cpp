#include <iostream>
#include<math.h>
using namespace std;
int check(int a){
    if(a<2) 
    return 0;
    else{
        for(int i=2;i<=sqrt(a);i++)
        {
            if(a%i==0) 
            return 0;
        }
    } 
    return 1;
}
 

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int key=0;
        for(int i=2;i<=n/2;i++){
            if(check(i)==1 &&check(n-i)==1){
                cout << i << " " << n-i;
                key=1;
                break;
            }
        }
        if(key==0){
            cout << "-1";
        }
        cout << endl;
    }
  return 0;
}