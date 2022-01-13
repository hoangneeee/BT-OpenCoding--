// GIAITHUA001 - Giai thừa số lớn
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

// Ta sẽ lấy từng phần tử của mảng nhân với i, từ A[0] đến A[m]
// Xét 1 phần tử bất kì A[j], có r là số dư khi nhân i với phần tử A[j-1];
// Gán s=A[j]*i+r; ( A[j] của mảng trước khi nhân )
// Vì A[j] chỉ lưu được 1 chữ số nên ta lưu A[j]=s%10 ( A[j] của mảng sau khi nhân )
// còn số dư r=s/10;
// Cứ tiếp tục như vậy đến A[m-1]- phần tử cuối cùng của mảng, nếu khi đó r=0 thì coi như xong, ta được một mảng mới.
// r>0 :
// Ta sẽ lấy thêm 1 phần tử để lưu vào mảng, A[m]=r; khi này mảng có m+1 phần tử
// r>=10:
// Ta lưu A[m]=r%10; tăng số phần tử của mảng lên 1 đơn vị và r=r/10;
// Nếu r>0 thì tiếp tục lưu A[m+1]=r%10, tăng số phần tử của mảng lên 1 đơn vị nữa;


void giaithua(unsigned int n)
{

    int A[50000];
	ll i,j,m=1;
    ll r=0,q;
    A[0]=1;			
    for(i=2;i<=n;i++)
	{
    	for(j=0;j<m;j++)
		{
        	q=r;
        	r=(A[j]*i+r)/10;	
        	A[j]=(A[j]*i+q)%10;
		}
    	while(r>0)
		{
          	A[m]=r%10;
         	m++;
         	r=r/10;
    	}
	}
    for(i=m-1;i>=0;i--)  
		cout << A[i];
}

int main()
{
	ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	while(t--){
		unsigned int n;
		cin >> n;
		giaithua(n);
		cout << endl;
	}
}