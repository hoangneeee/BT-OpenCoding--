// TUT05-05 
#include<bits/stdc++.h>
#define ll long long
#define MAX 200
using namespace std;

int main()
{
	char c;
	int t;
	ofstream fout;
	ifstream fin;
	
	//tao file co 2 so
	fout.open("test");
	fout << 113 << ' ' << 911;
	fout.close();	
	
	/* Cố gắng đọc a c, sau đó a t,
    rồi lại a c, rồi lại là t,
    từ tệp "test" vừa tạo. */
	fin.open("test");
	fin >> c >> t;
	cout << "c: '" << c << "'\n"; 
	cout << "t: " << t << "\n";
	fin >> c >> t;
	cout << "c: '" << c << "'\n"; 
	cout << "t: " << t << "\n";
	fin.close();
	
	return 0;
}