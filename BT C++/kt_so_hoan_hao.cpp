// UOCSO002 - Ước số nguyên tố
#include <bits/stdc++.h>
using namespace std;

bool checkPerfect(long long int n){
    long long int sum = 1;

    for (long long int i=2; i*i<=n; i++){		//tim tất cả các ước số

        if (n%i==0){

            if(i*i!=n)
                sum = sum + i + n/i;
            else
                sum=sum+i;
        }
    }
    if (sum == n && n != 1)			//neu tổng ước số (sum) bằng n thì là số hoàn hảo
        return true;
  
    return false;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		unsigned long long n;
    	cin>>n;
    	if(checkPerfect(n) ){
			cout<<"1";
		} else {
			cout<<"0";
		}
        cout << endl;
	}
    
    return 0;
}