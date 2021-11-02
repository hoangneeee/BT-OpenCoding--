// GIAITHUA002 - Giai thừa có n số 0 ở cuối
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool check (ll a, ll n){
	ll tmp = a, count = 0 , b = 5;
	while (b <= tmp){
		count += tmp/b;
		b = b*5;
	}
	return (count >= n);
}

ll timSum (ll n){
	if (n==1) return 5;
	
	ll low = 0;
	ll high = 5*n;
	while (low < high){
		ll mid = (low + high) >> 1;
		if (check(mid,n)) high = mid;
		else low = mid + 1;
	}
	return low;
}

int main (){
	int t;
	cin >> t;
	while (t--){
		ll n;
        cin >> n;
		cout << timSum(n) << endl;
	}
	return 0;
}