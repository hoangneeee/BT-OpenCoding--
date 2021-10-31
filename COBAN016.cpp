// COBAN016 - Bình phương số lớn

#include <iostream>
using namespace std;
int main()
{
	long i,j,k,t,n;
	cin>>t;
	for (j=1;j<=t;j++)
	{
		cin>>n;
		//doan dau
		for (i=1;i<=(n-1)/9;i++) cout<<"123456790";
		k=(n-1)%9;
		//doan giua
		for (i=1;i<=k;i++) cout<<char(48+i);
		for (i=k+1;i>=2;i--) cout<<char(48+i);
		//doan cuoi
		for (i=1;i<=(n-1)/9;i++) cout<<"098765432";
		cout<<"1"<<endl;
	}
}