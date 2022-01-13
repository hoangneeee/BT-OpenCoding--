// BISEARCH001 - Tìm các vị trí dãy số trong dãy số
#include <bits/stdc++.h>
#define ll int
using namespace std;

// Hàm tìm kiếm nhị phân sử dụng giải thuật đệ quy
int binarySearch(int a[], int l, int r, int x) {
    while (r >= l) {
        int mid = l + (r - l) / 2; // Tương đương (l+r)/2 nhưng ưu điểm tránh tràn số khi l,r lớn
    
        // Nếu arr[mid] = x, trả về chỉ số và kết thúc.
        if (a[mid] == x && a[mid-1]!=x)
            return mid;
    
        // Nếu arr[mid] < x, thực hiện tìm kiếm nửa phải của mảng
        if (a[mid] < x){
            l=mid+1;
        } else {
        // Nếu arr[mid] > x, thực hiện tìm kiếm nửa trái của mảng    
            r=mid-1;
        }
    }
 
    // Nếu không tìm thấy
    return -1;
}

int main(){
    ll n,m,x;
    cin >> n >> m;
    ll a[n],b[m];
    for(ll i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(ll i=0;i<m;i++)
    {
        cin >> b[i];
    }
    for(ll j=0;j<m;j++)
    {
       
        if (binarySearch(a,0,n-1,b[j]) != -1)
        {
            cout << binarySearch(a,0,n-1,b[j])+1 << " " ;
        } else {
            cout << 0 << " " ;
        }
    }
    return 0;
}