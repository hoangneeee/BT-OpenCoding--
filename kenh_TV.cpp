#include <bits/stdc++.h>
using namespace std;

//hàm kênh TV
void TV(int kenh){
    switch (kenh){
        case 7:
            cout << "Chu cai goi cho kenh nay la VTV1";
            break;
        case 9:
            cout << "Chu cai goi cho kenh nay la VTV2";
            break;
        case 14:
            cout << "Chu cai goi cho kenh nay la VTV3";
            break;
        case 19:
            cout << "Chu cai goi cho kenh nay la ESPN";
            break;
        case 25:
            cout << "Chu cai goi cho kenh nay la VCTV1";
            break;  
        case 31:
            cout << "Chu cai goi cho kenh nay la HANOI1";
            break;
        case 44:
            cout << "Chu cai goi cho kenh nay la HTV1"; 
            break;    
        default:
            cout << "Chu cai goi cho kenh nay la HTV2";
            break;
    }
}

int main(){
    cout << "Vui long nhap kenh TV so: ";
    int kenh; 
    cin >> kenh;
    if ( kenh != 7 || kenh != 9 || kenh != 14 || kenh != 19 || kenh != 25 || kenh != 31 || kenh != 44 || kenh != 63 ){
        cout << " Khong co kenh nay" << endl;
        cout << " Vui long nhap kenh TV khac : ";
        cin >> kenh;
    } 
    TV(kenh);

    
    return 0;
}