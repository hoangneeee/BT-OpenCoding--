// DEC2BIN - Đổi hệ thập phân sang hệ nhị phân
#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		int a[5000];
		int count=0; 
		
		while(n){
			count++;
			if(n%2==0){  // n chia het cho 2 thi gan so du =0 vao mang a
				a[count]=0;
			}
			else a[count]=1; //n khong chia het cho 2 thi gan so du =1 vao mang a
			n/=2;
		}
		
		//in tu cuoi mang
		if(a[count]==0){
			for(int i=count-1;i>=1;i--){ 
				cout<<a[i];
			}
		}
		else if(a[count]==1){
			for(int i=count;i>=1;i--){ 
				cout<<a[i];
			}
		}
		cout << endl;
	}
	return 0;
}