#include <iostream>
#include <iomanip>
using namespace std;

float nhietDoC(int temp);
float nhietDoF(int temp);

void nhapDuLieu(int& min_entry, int& max_entry, int& step_size, int luachon);
void inBang(int min_entry, int max_entry, int step_size, int luachon);

int main(){
    int min_entry = 0;
    int max_entry = 0;
    int step_size = 1;
    int luachon = 0;
    
    cout << "Chuyen doi tu do F sang do C chon 1." << endl;
    cout << "Chuyen doi tu do C sang do F chon 2." << endl;
    cin >> luachon;

    nhapDuLieu(min_entry, max_entry, step_size, luachon);

    inBang(min_entry, max_entry, step_size, luachon);

    return(0);
}

float nhietDoC(int temp){
    return(temp-32)/1.8;
}

float nhietDoF(int temp){
    return(1.8*temp)+32;
}

void nhapDuLieu(int& min_entry, int& max_entry, int& step_size, int luachon){
    cout << " Nhap nhiet do be nhat :" << endl;
    cin >> min_entry;
    cout << " Nhap nhiet do lon nhat :" << endl;
    cin >> max_entry;
    cout << " Nhap khoang nhay :" << endl;
    cin >> step_size;
    cout << endl << endl ;
}

void inBang(int min_entry, int max_entry, int step_size, int luachon){
    int temp;
    if(luachon == 1){
        cout.width(17);
        cout << "Nhiet Do F";
        cout.width(13);
        cout << "Nhiet Do C" << endl << endl;
        for (temp = min_entry ; temp <= max_entry ; temp += step_size){
            cout.width(15);
            cout << temp;
            cout.width(15);
            cout << nhietDoC(temp) << endl;
        }
    } else {
        cout.width(17);
        cout << "Nhiet Do C";
        cout.width(13);
        cout << "Nhiet Do F" << endl << endl;
        for (temp = min_entry ; temp <= max_entry ; temp += step_size){
            cout.width(15);
            cout << temp;
            cout.width(15);
            cout << nhietDoF(temp) << endl;
        }
    }
    
}