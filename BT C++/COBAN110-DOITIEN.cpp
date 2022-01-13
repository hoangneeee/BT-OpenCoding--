// COBAN0110 - DOITIEN
#include <bits/stdc++.h>
using namespace std;


//hàm gợi ý số lượng tiền giấy bé nhất
void hint(int withdraw)
{
    int a[]={1000, 500, 200, 100,50,20,10,5,2,1};
    int n=10,res=0;
    for(int i=0;i<n;i++)
    {
        res+= withdraw/a[i];
        withdraw%=a[i];
    }
    cout << res << endl;
}


int main()
{
	int t;
	cin >> t;

	while(t--) {
		int n;
		cin >> n;
		hint(n);
	}
	
}