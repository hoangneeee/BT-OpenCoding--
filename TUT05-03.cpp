// TUT05-03 Đếm số kí tự có trong file
#include<bits/stdc++.h>
#define ll long long
#define MAX 200
using namespace std;

int main()
{
    char ch;
    int count=0;
    //đọc file
    ifstream fin("TUT05-03.cpp");
    //đọc và hiển thị file có khoảng trắng
    while(fin.eof()==0)
    {
        fin.get(ch);
        //nếu là 1 ký tự count ++
        if(ch!='\0') count++;
        //nếu là xuống dòng hoặc khoảng trắng count--
        if(ch=='\n' || ch==' ') count--;
    }
    cout<< count <<endl;
   
    return 0;
}