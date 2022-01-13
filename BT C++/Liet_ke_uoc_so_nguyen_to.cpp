#include <iostream>
using namespace std;
 
 
int main(){
    int t;
    cin >> t;
    
    while (t--){
        long long int n;
        int k;
        cin >> n >> k;
        for(int i=2;i<=n;i++)
            while (n%i == 0  ) {
                int x1;
                x1=i;   
                cout << i << " ";
                n /= i;
            }
        cout << endl;
    }

}
