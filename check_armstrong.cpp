#include <bits/stdc++.h>

using namespace std;

int dem(int n){
    int dem = 0;
    while (n > 0)
    {
        n /= 10;
        dem++;
    }
    return dem;
}
 
bool checkArmstrong(int n){
    int soMu = dem(n);
    int temp = n, sum = 0, last;
    while (temp > 0){
        last = temp % 10; 
        temp /= 10;       
        sum += pow(last, soMu);
    }
    if (sum == n)
        return true;
    return false;
}
 
int main(){
    int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		if (checkArmstrong(n) == true){
        	cout << "1";
    	}else{
        	cout << "0";
    	}
		cout << endl;
	}
 
   return 0;
}