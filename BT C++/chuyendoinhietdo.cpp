#include <iostream>
#include <conio.h>
using namespace std;

int main(){

    int luachon;
    float nhietdoC,nhietdoF;
    cout << "1. Chuyen doi tu do C sang do F" << endl;
    cout << "2. Chuyen doi tu do F sang do C" << endl;
    cout << "Ban chon giua 1 va 2 : " << endl;
    cin>>luachon;
    if (luachon==1){
    cout << "Nhap do C : " << endl;
    cin>>nhietdoC;
    nhietdoF=(1.8*nhietdoC)+32;
    cout << "Do F tuong ung = " << nhietdoF << endl;
    } else {
        cout << "Nhap do F : " << endl;
        cin>>nhietdoF;
        nhietdoC=(nhietdoF-32)/1.8;
        cout << "Do C tuong ung = " << nhietdoC << endl;
    }
    return 0;
}
