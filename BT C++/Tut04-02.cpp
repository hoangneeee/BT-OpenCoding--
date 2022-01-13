//Phân tích một số thành thừa số nguyên tố
#include <iostream>
using namespace std;
 
 
int main(){
    int n;
    cout << " nhap so can phan tich :";
    cin >> n;
    int mu;
        
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
                cout << " " << endl;
            }
        }
    }
    return 0;
    
}