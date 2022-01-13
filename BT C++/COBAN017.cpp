// COBAN017 - Dãy con liên tiếp tổng lớn nhất
#include <bits/stdc++.h>
#define ll long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);

    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        int a[700000];
        //kiểm tra dương
        bool ktd=false;
        ll max;
        for(ll i=0; i<n;i++)
        {
            cin >> a[i];
            // nếu có số dương gán bằng true
            if(a[i]>0) ktd=true;
            if(i==0) max =a[i];
            else {
                //neu khong co số dương nào in ra số max = số âm lớn nhất 
                if(max<a[i]) max=a[i];
            }
        }

        if(!ktd) cout << max << '\n';
        else 
        {
            ll sum=0,res=a[0];
            for(ll i=0;i<n;i++)
            {
                //nếu tổng mảng con bé hơn 0 dừng lại gán sum=0 bắt đầu đoạn mới
                if (sum+a[i]<0)
                {
                    sum=0;
                    continue;
                }
                //ngược lại cộng
                sum+= a[i];
                // so sánh res và sum tìm max : res = sum
                if(res<sum) res=sum;
            }
            cout << res << '\n';
        }
    }
}