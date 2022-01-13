// DAYSO001 - Dãy cấp số cộng

#include <bits/stdc++.h>
#define MAX 100000
#define ll long long
using namespace std;

int main (){
	int t;
	cin >> t;
	while (t--){
		ll arr[MAX];
		ll n;
		cin >> n;
		for (int i = 0; i< n; i++){
			cin >> arr[i];
		}
		int count = 0;
		int d = arr[1] - arr[0];
		for (int j = 1; j<n; j++){
			if (arr[j] != (arr[0] + j*d)){
				count ++;
				break;
			}
		}
		if (count == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}