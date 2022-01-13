#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int terms;
    double pi = 1;
    cout << "Nhap so luong cac so hang dung de tinh gan dung so Pi :";
    cin >> terms;
    //tinh số pi gần đúng
    if (terms > 0){                             
        for (int i = 1; i < terms; i++){
            pi += 4 * (pow(-1,i))/((2*i)+1); 
        }
        pi += 3;                                
        cout << "Gia tri gan dung cua so Pi la: " << pi << "." << endl << endl;
    }
    else cout << endl << "Gia tri khong hop le vui long nhap lai: \n" << endl;

    return 0;
}