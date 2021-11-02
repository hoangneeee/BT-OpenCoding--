// DCTDN3 - Dãy con tăng dài nhất (Bản khó)
// Giải thích:
// Tại mỗi lần lặp, dùng hàm lower_bound (hàm tìm kiếm nhị phân) tìm kiếm vị trí thích hợp (pos) để đặt a[i] vào mảng b
//  nhằm đảm bảo rằng tại mỗi pos sẽ có một phần tử nhỏ nhất là đuôi của dãy con tăng có độ dài pos.
#include<bits/stdc++.h>
#define N (int)1e5+1
using namespace std;

int n;
int a[N], b[N];

int main(){
	cin >> n;	
    for(int i=1; i<=n; i++) 
        cin >> a[i];
	
	int res= 1;		b[1]= a[1];
	
	for(int i=2; i<=n; i++){
		int pos= lower_bound(b+1, b+1+res, a[i]) - b;
		
		b[pos]= a[i];
		res= max(res, pos);
	}
	
	cout<<res;
}