#include <bits/stdc++.h>
using namespace std;
unsigned int fb(unsigned int n)
{
    if(n==1||n==0||n==2||n==3) return n;
   return fb(n-2)+fb(n-1);
}
int main()
{
	int t;
	cin >> t;
	while (t--){
		unsigned int i,n,d=0;
   		cin >> n;
   		for(i=0;i<=n;i++){
			   	if(n==fb(i)){
            	d++;            
       		}
		}
    if(d==1) cout << "YES" << endl;
   	else cout << "NO" <<endl;
	}
}