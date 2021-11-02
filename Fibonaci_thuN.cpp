//Số Fibonaci thứ N
#include<bits/stdc++.h>

int main(){
	using namespace std;
	int a,m=0,i;
	cin>>a;
	while(a--){
		long long b;
		cin>>b;
		long long f0=1,f1=1,f2=1;
		for(int i=2;i<b;i++){
			f0=f1;f1=f2;f2=f1+f0;
			
		}
		cout<<f2<<endl;
	}
}