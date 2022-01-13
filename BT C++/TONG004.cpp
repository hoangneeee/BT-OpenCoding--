// TONG004 - Tổng luỹ thừa bậc n
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll luyThua(ll num, ll n){
	if (n == 0) 
        return 1;
	else if (n % 2 == 0) 
        return luyThua(num, n/2)* luyThua(num, n/2);
	else 
        return num * luyThua(num, n/2) * luyThua(num, n/2);
}

ll ktDequy(ll x, ll n, ll curr_num = 1, ll curr_sum = 0){
	ll result = 0;
	ll p = luyThua(curr_num,n);
	while (p + curr_sum < x){
		result+= ktDequy(x,n, curr_num + 1, p+curr_sum);
		curr_num++;
		p = luyThua(curr_num,n);
		}
	if (p + curr_sum ==x) result++;
	return result;
}

int main (){
	int t;
	cin >> t;
	while (t--){
		ll m, n;
		cin >> m >> n;
		cout << ktDequy(m,n) << endl;
	}
	return 0;
}