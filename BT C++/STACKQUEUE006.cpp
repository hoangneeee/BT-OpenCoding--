// STACKQUEUE006 - POSTFIX TO INFIX
#include<bits/stdc++.h>
using namespace std;


// duyệt mảng từ trái sang phải
// Tạo một chuỗi bằng cách nối hai toán hạng và toán tử sau chúng. 
// string = operand1 + operand2 + operator 
// Và đẩy chuỗi kết quả trở lại Stack
bool Isoperator(char x){
    switch(x){
        case '^':
        case '/':
        case '*':
        case '-':
        case '+':

        return true;
    }
    return false;
}
void result(string s){
    stack<string> carry;
    for(int i=0; i<s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z'){
			// cout << string(1,s[i]) << endl;
			carry.push(string(1,s[i]));
		}   


        else if(Isoperator(s[i])){
            string a = carry.top();
            carry.pop();
            string b = carry.top();
            carry.pop();

            string c = '(' + b + s[i] + a + ')';
            carry.push(c);
        }
    }

    string res = "";
    while(!carry.empty()){
        res += carry.top();
        carry.pop();
    }
    cout << res << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin.ignore();
        string s;
        cin >> s;
        result(s);
    }
    return 0;
}