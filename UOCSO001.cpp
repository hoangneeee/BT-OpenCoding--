// UOCSO001 - Tổng các ước số
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
	cin >> t;
	while (t--){
        unsigned int n;
        cin >> n;
        unsigned long int sum=0;
    	for (int i = 1; i <= sqrt(n); i++) {
		    if (n % i == 0) {
			    int j = n/i;
			    if (i == j) {
				    sum = sum + i;
			    } else {
				    sum = sum + i + j;
			    }
		    }
	    }
	cout << (sum - n) << endl;
	}
    return 0;
}