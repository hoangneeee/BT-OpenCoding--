#include <iostream>
#include <cmath>
using namespace std;

long long soNguyenTo(long long n){
    long long max;
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
	long long n;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<soNguyenTo(n)<<endl;
	}
return 0;
}