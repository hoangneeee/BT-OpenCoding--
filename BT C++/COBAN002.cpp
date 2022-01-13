// Số chính phương   ID: COBAN002

#include <bits/stdc++.h>
using namespace std;

bool soCP(long long i){			//kiem tra so chinh phuong
    float a = sqrt(i);
    if(int(a)*int(a) == i)
        return true;
    return false;
}

bool checkCP(long long i){
    int arr[20];
    int count=0;
    while(i>0){
        arr[count] = i % 10;    //chia du de lay cac phan tu trong i
        i/= 10;
        count++;
    }
    int check = 0;
    for(int j = 0; j<count; j++){   //kiem tra xem phan tu do co phai la so chinh phuong khong
        if(soCP(arr[j]) == false){
            check = 1;
            break;
        }
    }
    if(check == 0)
        return true;
    return false;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int k;
        long long i;
        cin >> k;
        long long min = pow(ceil(sqrt(pow(10,k-1))),2);     //so chinh phuong be nhat
        while(1){
            if(checkCP(min)){
                cout << min << endl;
                break;
            }
            else{
                min += 2*sqrt(min) +1;  //gan min bang so chinh phuong  be thu 2
            }
        }
    }
    return 0;
}