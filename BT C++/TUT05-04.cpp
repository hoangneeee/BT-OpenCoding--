// TUT05-04 In file nguoc
#include<bits/stdc++.h>
#define ll long long
#define MAX 2000
using namespace std;

string DaoNguoc(string s) {
    int length = s.length();
    string temp;
    for (int i = length-1; i >=0; i--) {
        temp.push_back(s[i]);
    }
    return temp;
}

int main()
{
    char str[MAX];
    //doc file
    ifstream fin("TUT05-04.cpp");
    string s1; 

    stringstream ss;
    ss << fin.rdbuf(); //chuyen du lieu trong bo nho dem vao luong ss
    s1 = ss.str(); //gan cho chuoi s1
    
    cout<<DaoNguoc(s1);
    return 0;
}