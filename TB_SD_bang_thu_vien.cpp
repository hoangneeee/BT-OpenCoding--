#include <bits/stdc++.h>
#include "Statistics.h"
using namespace std;

int main(){
    int n;
    cout<<"Nhap so luong cac so:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

cout<<"Gia tri trung binh="<<avg(arr,n)<<endl;
cout<<"Do lech chuan cua phep tinh="<< SD(arr,n)<<endl; 
return 0;
}