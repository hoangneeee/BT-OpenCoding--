//-----------------------------------//
// Họ và tên : Võ Việt Hoàng
// MSV : B19DCVT161
// Gmail : levuthanhtung11@gmail.com
//-----------------------------------//

//Assignment CP 2021.
//BIGNUMBER.
#include <bits/stdc++.h>
using namespace std;

//Hàm cộng
string add(string a, string b)
{
    string res="";
    while(a.length() < b.length()) a="0"+a;
    while(b.length() < a.length()) b="0"+b;
    int carry=0;

    for(int i=a.length()-1;i>=0;i--)
    {
        int tmp=a[i]-48 + b[i]-48 + carry;
        carry=tmp/10;
        tmp=tmp%10;
        res=(char)(tmp+48)+res;
    }
    if(carry>0) res="1"+res;
    return res;
}
 
//Hàm nhân
string mul(string a, string b)
{
    string res="";
    int n=a.length();
    int m=b.length();
    int len=n+m-1;
    int carry=0;

    for(int i=len;i>=0;i--)
    {
        int tmp=0;
        for(int j=n-1;j>=0;j--)
            if(i-j<=m && i-j>=1)
            {
                int a1=a[j]-48;
                int b1=b[i-j-1]-48;
                tmp+=a1*b1;
            }
            tmp+=carry;
            carry=tmp/10;
            res=(char)(tmp%10 + 48)+res;
    }
    while(res.length()>1 && res[0]=='0') res.erase(0,1);
    return res;
}

int main()
{   
    string a, b;
    char c;
    int t;

    ifstream fin;
    ofstream fout;
    //Mở file in trước rồi đến out
    fin.open("bignumber.in");
    fout.open("bignumber.out");

    fin >> t;
    
    while(t--) {

        fin >> a >> c >> b;
        if(c == '*') fout << mul(a,b) << endl;
        else if (c == '+') fout << add(a,b) << endl;

    }

    //Đóng file in xong mới đóng out
    fin.close();
    fout.close();
}