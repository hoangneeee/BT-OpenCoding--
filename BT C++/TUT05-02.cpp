// TUT05-02 Đọc và ghi file có cmt
#include<bits/stdc++.h>
#define ll long long
#define MAX 2000
using namespace std;

int main()
{
      string str;
      char ch1[3] = {'/', '*', '\0'};          // khai bao bien ky tu /*
      char ch2[3] = {'*', '/', '\0'};          // khai bao bien ky tu  */
      char ch3[3] = {'/', '/', '\0'};          // khai bao bien ky tu  //
       //doc file
      ifstream fin("TUT05-02.cpp");
      getline(fin, str, '\0');        // ghi du lieu file vao chuoi den ky tu '\0' 
      //Xoa cmt sau ky tu //. Vong lap dung lai khi khong con tim duoc ch1 trong chuoi
      while (str.find(ch3) != string::npos) 
      {
         //size_t kieu du lieu khong dau
         size_t first = str.find(ch3);          //tim vi tri cua cac dau trong ch3
         size_t down = str.find("\n", first); // vi tri dau tien tim duoc ky tu xuong dong tinh tu vi tri= first.
         str.erase(first, down - first);        // xoa so luong ky tu
      }
      // xoa comment trong dau /* */. Vong lap dung lai khi khong con tim duoc ch1 trong chuoi
      while (str.find(ch1) != string::npos) 
      {
         size_t first = str.find(ch1);          //tim vi tri cua cac dau trong ch1
         size_t end = str.find(ch2, first);     //tim vi tri cua cac dau trong ch2
         str.erase(first, (end - first) + 3);   // xoa so luong ky tu 
      }
      cout << str; 
      return 0;
}