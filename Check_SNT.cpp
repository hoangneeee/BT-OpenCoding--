//Kiểm tra số nguyên tố.
#include <iostream>
#include<math.h>
using namespace std;
//kiểm tra số nguyên tố nếu đúng trả về 1 sai trả về 0
int check(int a){
    if(a<2) return 0;
    else{
        for(int i=2;i<=sqrt(a);i++)
        {
            if(a%i==0) return 0;
        }
    } 
    return 1;
}

int main()
{
    int n;
    cout << " nhap so can kiem tra :" << endl;
    cin >> n;
    if(check(n)){
        cout<< "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
   
    return 0;
}