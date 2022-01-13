// COBAN019 - Biến đổi số
// #include<bits/stdc++.h>
#include<iostream>

using namespace std;
typedef unsigned long long ull;

ull count(ull n)
{
	if(n<2)
	return n;
	ull sum = 1 + min(n%3 + count(n/3), n%2 + count(n/2));
	return sum;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ull n;
		cin >> n;
		cout << count(n) << endl;
	}
	return 0;
}
