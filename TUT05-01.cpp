// TUT05-01 Đọc và ghi file//
#include<bits/stdc++.h>
#define ll long long
#define MAX 200
using namespace std;

int main()
{
    char ch;
    //đọc file//
    ifstream fin("TUT05-01.cpp");
    //đọc và hiển thị file có khoảng trắng//
    while(fin.eof()==0)
    {
        fin.get(ch);
        cout<<ch;
    }
    cout<<endl;
   
    return 0;
}