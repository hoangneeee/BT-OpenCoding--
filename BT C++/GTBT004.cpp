// GTBT004 - Biểu thức căn-luỹ thừa

#include <bits/stdc++.h>
using namespace std;

float S(int n, float x){
	float sum=0;
	long long tmp=1;
	for(int i=1;i<=n;i++){
		tmp *= x;
		sum=sqrt( tmp+ sum);
	}
    return sum;
}

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		float x;
		cin >> n >> x;
		
		cout << fixed << setprecision(3) << S(n,x) << endl;
	}
	return 0;
}