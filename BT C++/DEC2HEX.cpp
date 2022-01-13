// DEC2HEX - Chuyển đổi thập phân sang hexa
#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

// Thuật toán :

// Lưu trữ phần còn lại khi số đó chia cho 16 trong một biến tạm thời. 
// Nếu temp nhỏ hơn 10, hãy chèn (48 + temp) vào mảng ký tự.
// Ngược lại nếu temp lớn hơn hoặc bằng 10, hãy chèn (55 + temp) vào mảng ký tự.
// Chia số bây giờ cho 16
// Lặp lại hai bước trên cho đến khi số không bằng 0.
// In mảng theo thứ tự ngược lại 

//ham dec to hexa
void decToHexa(ll n)
{
    char hexaNum[5000];
    ll i = 0;
    while (n != 0) {
        ll temp = 0;
        temp = n % 16; // chia du cho 16
 
        //kiem tra neu temp < 10 thi +48
        if (temp < 10) {
            hexaNum[i] = temp + 48;
            i++;
        }       // nguoc lai thi +55
        else {
            hexaNum[i] = temp + 55;
            i++;
        }
 
        n = n / 16;
    }
 
    // in ra so chuyen doi
    for (ll j = i - 1; j >= 0; j--)
        cout << hexaNum[j];
}

int main()
{
	unsigned int t;
	cin >> t;
	while(t--)
	{
        ll n;
        cin >> n;
        if(n==0){
            cout << "0";
        }
        decToHexa(n);
        cout << endl;
	}
	return 0;
}