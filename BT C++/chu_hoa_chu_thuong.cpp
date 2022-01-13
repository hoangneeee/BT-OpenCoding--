#include <iostream>
#include <string.h>
using namespace std;
  
void chuCaiThuong(string str){
    int i;
    for(i=0;str[i]!='\0';i++){
        if(str[i]>=97&&str[i]<=122)
        str[i]=str[i]-32;
    }
    cout<<"\nCau da duoc chuyen doi sang chu hoa:\n "<<str;
}

void chuCaiHoa(string str){
    int i;
    for (i=0;str[i]!='\0';i++){
        if(str[i]>=65&&str[i]<=90)
        str[i]=str[i]+32;
    }
     cout<<"\nCau da duoc chuyen doi sang chu thuong:\n "<<str;
}

int main(){
    string str;
    cout <<"Nhap cau can chuyen doi:" << endl;
    getline(cin,str);
    chuCaiThuong(str);
    chuCaiHoa(str);
    return 0;
}