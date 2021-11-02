// DAYSO006 - Tạo số lớn nhất
#include <bits/stdc++.h>
#define MAX 1001
#define ll  long long
using namespace std;

//So sanh x va y tu trai qua phai
bool check(int x, int y){
	int a = x;
	int b = y;
	short lenA = floor(log10(a)) + 1;
	short lenB = floor(log10(b)) + 1;
	
	//Giong hang (so chu so bang nhau)
	while(lenA < lenB){
		a  *= 10;		//Chen them 0 vao phia tay phai
		lenA++;
	}
	
	while(lenA > lenB){
		b  *= 10;
		lenB++;
	}
	
	//So sanh
	return (a > b);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		int arr[MAX];
		cin>>n;
        //Nhap mang
		for(int i = 0; i < n; i++){
			cin>>arr[i];
		}
		
		//Sap xep giam dan 
		for(int i = 1; i < n; i++){
			int temp = arr[i];
			int count = i;
			while(count > 0 && check(temp, arr[count - 1])){
				arr[count] = arr[count - 1];
				count--;
			}
			arr[count] = temp;
		}
		//Hien thi ket qua
		for(int i = 0; i < n; i++)
			cout << arr[i];
		cout << endl;
		
	}
	return 0;
}