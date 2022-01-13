//Phân tích một số thành thừa số nguyên tố
#include <iostream>
using namespace std;
 
 
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int mu;
        int a[500000];
        for(int i = 2; i <= n; i++){
            mu = 0;
            while(n % i == 0){
                mu++;
                n /= i;
            }
            if(mu){
                cout << i;
                if(mu >= 1) cout << " " << mu;
                if(n > i){
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    
    return 0;
}