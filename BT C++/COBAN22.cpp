// COBAN022 - Mua Sô-cô-la
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        long int x,y,m;
        cin >> x >> y >> m;
        long int vohop=0,hop=0,vohopdu=0;
        if(m>=x)
        {
            vohop+=m/x;         //số vỏ = số hộp

            hop+=vohop;
            while(vohop>=y)     // nếu vỏ lớn hơn y có thể đổi
            {
                vohopdu=vohop%y;      //số vỏ dư còn lại
                vohop/=y;              //số hộp sau khi được đổi = số vỏ hộp
                hop+=vohop;
                vohop+=vohopdu;
            }
        }
    cout << hop << endl;
    }
}