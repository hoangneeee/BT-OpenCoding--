//NGTO007 - Tìm số có ước nguyên tố lớn nhất
#include<bits/stdc++.h>
#define ll long long
#define MAX 500000
using namespace std;

ll checkNgTo(ll n){
	if(n == 2) return 1;
	else if(n < 2 || n % 2 == 0) return 0;
	else{
		for(int i = 3; i <= sqrt(n); i+=2){
			if(n % i == 0){
				return 0;
			}
		}
	}
	return 1;
}

int main(){
	int t; 
	cin >> t;
	while(t--){
		ll l,r; 
		cin >> l >> r;
		int x;
		if(l == r || l+1 == r){
			if(checkNgTo(r)){
				x = r;
			}
		}else{
			for(int i = l; i <= r; i++){
				if(checkNgTo(i))
					x = i;	
			}
		}
		cout << x << endl;	
	}
	return 0;
}