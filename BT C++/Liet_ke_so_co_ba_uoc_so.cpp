#include<iostream>
#include<cmath>

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

int main(){
	int t;
    cin>>t;

	while(t--){
		long long n;
        int x;
        cin>>n;
        if (n >= 2) {
        	cout<<"4 ";
    	}
        for (int i = 3; i <= sqrt(n); i+=2) {
            if (soNguyenTo(i) == 1) {
                x=i*i;
                cout<< x <<" ";
            }
        }
		cout << endl;
	}
}