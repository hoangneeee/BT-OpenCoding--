// COBAN024 - Đổi tiền xu
#include<bits/stdc++.h>
#define ll long long
#define MAX 500000
using namespace std;

int count(int a[], int n, int m){   
    if(n == 0){
    	return 1;
	}
    if(n < 0){
    	return 0;
	}
    if(m <= 0 && n >= 1){
    	return 0;
	}
    return count(a, n, m-1) + count(a, n - a[m-1],m);
}

int main(){
    int n, m;
    cin >> n >>m;
    int a[m];
    for(int i = 0 ; i <m; i++){
        cin>>a[i];
    }
    cout << count(a,n,m) ;
    return 0;
}