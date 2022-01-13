// NGTO001 - Đếm số nguyên tố hoàn toàn
#include <bits/stdc++.h>
using namespace std;

int SNT(int n){ 
	if(n<2){
		return 0;
	}
	for(int i=2;i<= sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}

int check(int n){
	while(n){
		int temp=n%10;
		if( temp!=2  &&  temp!=3 && temp!=5 && temp!=7){ 
			return 0;
		}
		n/=10;
	}
	
	return 1;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		long long n;
		cin >> n ;
		int count=0;
		for(int i=2;i<=n;i++){
			if(  SNT(i)==1 && check(i)==1 ){
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}