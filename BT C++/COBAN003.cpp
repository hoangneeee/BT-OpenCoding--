// COBAN003 - Đếm số chính phương

#include <bits/stdc++.h>
using namespace std;

long long countCP(long long a, long long b)		
{
    return (floor(sqrt(b)) - ceil(sqrt(a)) + 1);
}
//Ví dụ
// cho b = 24, a = 8. floor (sqrt (b)) = 4, 
// ceil (sqrt (a)) = 3. Và số ô vuông là 4 - 3 + 1 =2
// Hai số là 9 và 16
int main(){
    int t;
    cin >> t;
    while(t--){
        long long L,R;
        cin >> L >> R;
		cout << countCP(L,R) << endl;
        
    }
    return 0;
}