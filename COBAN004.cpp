// COBAN004 - Số đối xứng
#include <bits/stdc++.h>
using namespace std;

int main () 
{
	int t;
	cin >> t;
	while (t --)
    {
		int k;
		cin >> k;
		if (k % 2 == 0)
        {
			cout << int(pow (10, k/2) - pow (10, (k/2)-1)) << endl; // cong thuc tinh so doi xung co k2 chu so
		} 
        else 
        {
			int x = (k-1)/2;
			cout << int((pow (10,x) - pow (10,x-1)) * 10) << endl;
		}
	}
}