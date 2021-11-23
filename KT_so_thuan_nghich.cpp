#include <iostream>
 
using namespace std;

int thuanNghich(long long n) {
    int a[20];
    int dem = 0, i;
    do {
        a[dem++] = (n % 10);
        n = n / 10;
    } while (n > 0);
    for (i = 0; i < (dem/2); i++) {
        if (a[i] != a[(dem - i - 1)]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        if(thuanNghich(n)==1)
            cout << "YES" << endl;
        if(thuanNghich(n)==0)
            cout << "NO" << endl;

    }
}
    