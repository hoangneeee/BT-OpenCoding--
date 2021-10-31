// COBAN007 - M chữ số đầu trong luỹ thừa
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

// Hàm tìm đầu tiên
// M chữ số từ N ^ K 
void timDauvaCuoiM(ll N, ll K, ll M)
{
// Tính M chữ số đầu tiên 
	ll firstM;

	double y = (double)K * log10(N * 1.0);

	//trích xuất số sau số thập phân
	y = y - (ll)y;

	// tim 10 ^ y
	double temp = pow(10.0, y);

	//Di chuyển Điểm thập phân M - 1 chữ số về phía trước
	firstM = temp * (1LL) * pow(10, M - 1);

	//in ket qua
	cout << firstM <<endl;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	ll N, K, M;
	cin >> N >> K >> M;
	timDauvaCuoiM(N, K, M);
	}
	return 0;
}