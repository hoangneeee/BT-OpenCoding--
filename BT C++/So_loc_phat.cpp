#include <iostream>
using namespace std;

long long n;

bool ktlocphat(long long n) {
 while(n > 0) {
  int t = n % 10;
  if (t != 0 && t != 6 && t != 8)
   return false;
  n = n / 10;
 }
 return true;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        cin >> n ;
        if(ktlocphat(n))
            cout << "YES" << endl;
        else  cout << "NO" << endl;
    }

}