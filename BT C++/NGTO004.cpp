//NGTO004 - Ước nguyên tố lớn nhất
#include<bits/stdc++.h>
#define ll long long
#define MAX 500000
using namespace std;

ll uocNgToMax(ll n){
    ll max;
	while(n%2==0){ 
		max=2;
		n/=2;
	}
	for(int i=3;i<=sqrt(n);i+=2){
		while(n%i==0)
			n/=i;
			max=i;
	}
	if(n>1) max=n;
		return max;
}

int main(){
	int t;
	ll n;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<uocNgToMax(n)<<endl;
	}
return 0;
}