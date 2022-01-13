// Bài toán rút tiền từ ngân hàng
//TUT04-04
#include<bits/stdc++.h>
using namespace std;

//hàm gợi ý số lượng tiền giấy bé nhất
void hint(int withdraw)
{
    int a[]={100,50,20,10,5,2,1};
    int n=7,res=0;
    for(int i=0;i<n;i++)
    {
        res+= withdraw/a[i];
        withdraw%=a[i];
    }
    cout <<"Minimum number of banknotes :";
    cout << res << endl;
}

//hàm in
void xuat(int x1 ,int x2,int x3,int x4,int x5,int x6)
{
    cout << x1 << " :100$, " << x2 << " :50$, " << x3 << " :20$, " << x4 << " :10$, " << x5 << " :5$, " << x6 << " :1$. " << endl;
}

//Tính toán phương án rút tiền theo mệnh giá 100$,50$,20$,10$,5$,1$
void cacPhuongAnRutTien(int withdraw)
{
    //withdraw = số tiền cần rút
    //các mệnh giá có thể đưa ra cho người dùng 
    // 100$ 50$ 20$ 10$ 5$  1$m
    //  x1  x2  x3  x4  x5  x6
    //Phương trình rút tiền :
    //100*x1 + 50*x2 + 20*x3 + 10*x4 + 5*x5 + 1*x6 = withdraw
    int x1=0,x2=0,x3=0,x4=0,x5=0,x6=0;
    while(x1<= (withdraw/100))
    {
        while(x2<= (withdraw/50))
        {
            while(x3<= (withdraw/20))
            {
                while(x4<= (withdraw/10))
                {
                    while(x5<= (withdraw/5))
                    {
                        while(x6<= (withdraw/1))
                        {
                            if(100*x1 + 50*x2 + 20*x3 + 10*x4 + 5*x5 + 1*x6 == withdraw)
                            {
                                xuat(x1,x2,x3,x4,x5,x6);
                            }
                            x6++;
                        }
                        x6=0;
                        x5++;
                    }
                    x5=0;
                    x4++;
                }
                x4=0;
                x3++;
            }
            x3=0;
            x2++;
        }
        x2=0;
        x1++;
    }
}

int main()
{
	long n;
    cout << "Enter the amount to withdraw :" ;
    cin >> n;
    cout << "Number of ways the bank can pay :" << endl;
    cacPhuongAnRutTien(n);
    hint(n);
    return 0;
}