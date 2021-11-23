#include <iostream>
#include <cmath>
  
using namespace std;

long long soNguyenTo(long long n) {
    if (n < 2) {
        return 0;
    }
    int i;
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
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
		if (n >= 2) {
        	cout<<"2 ";
    	}
    for (int i = 3; i <= n; i+=2) {
        if (soNguyenTo(i) == 1) {
            cout<<i<<" ";
        }
    }
	cout << endl;
	}
    return 0;
} 