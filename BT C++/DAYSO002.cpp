// DAYSO002 - Dãy con K phần tử có tổng bằng S
#include<bits/stdc++.h>

using namespace std;
int dem = 0;
vector<int> arr;
vector<int> arr2;

void display(){
	int sopt = arr2.size();
	for(int i=0; i<sopt; i++){
		cout << arr2[i] << " ";
	}
	cout << endl;
}


void findSubset(int sum, int K, int S, int index){
	if(sum==S && arr2.size() == K){
	dem++;
	return;
	}
	if(sum > S || index == arr.size())
	return;

    // push_back(): Hàm đẩy một phần tử vào vị trí sau cùng của vector.
	arr2.push_back(arr[index]);
	findSubset(sum+arr[index],K,S,index+1);
	arr2.pop_back();
	findSubset(sum,K,S,index+1);

}


int main(){
	int t;
	cin >> t;
	while(t--){
		int N,K,S;
		cin >> N >> K >> S;
		for(int i=0; i<N; i++){
			int b;
			cin >> b;
			arr.push_back(b);
		}
		findSubset(0, K, S, 0);
		cout << dem << endl;
		dem = 0;
		arr.clear();
		arr2.clear();
	}
	return 0;
}