// UOCSO004 - Ước nguyên tố
#include <bits/stdc++.h>
using namespace std;

int uocSNT(long long n){ 
	if(n<2){
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			int count=0;
			while(n%i==0){
				n/=i;
				count++;
				if(count >1){
					return 1; //neu uoc nto xuat hien > 1 lan thi tich cac uoc so nguyen to cua n se nho hon n
				}
			}
		}
	}
	return 0;
}

int main(){
	int t;
	cin >>t;
	while(t--){
		long long n;
		cin >> n;
		if(uocSNT(n)==1){
			cout<< "YES" <<endl;
		}
		else cout<< "NO" <<endl;
		
	}
	return 0;
}