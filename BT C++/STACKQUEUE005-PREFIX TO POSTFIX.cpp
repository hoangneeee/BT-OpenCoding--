// STACKQUEUE005 - PREFIX TO POSTFIX
#include<bits/stdc++.h>
using namespace std;
// duyệt mảng từ phải sang trái
// Tạo một chuỗi bằng cách nối hai toán hạng và toán tử sau chúng. 
// string = operand1 + operand2 + operator 
// Và đẩy chuỗi kết quả trở lại Stack
bool Isoperator(char x){
    switch(x){
        case '^':
        case '/':
        case '*':
        case '+':
        case '-':
        return true;
    }
    return false;
}

void result(string s){
    stack<string> stk;
    for(int i=s.size() - 1; i>=0; i--){
        if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z') {
			stk.push(string(1,s[i]));
			// cout << string(1,s[i]) << endl;
		}
        else if(Isoperator(s[i])){
            string carry1 = stk.top();
            stk.pop();
            string carry2 = stk.top();
            stk.pop();
            string carry = carry1 + carry2 + s[i];
            // push lai vao stack
            stk.push(carry);
        }
    }
    string res="";
    while(!stk.empty()){
        res += stk.top();
        stk.pop();
    }
    cout << res << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
		// cin.ignore() là 1 phương thức của đối tượng cin trong C++. 
		// Câu lệnh này có tác dụng xóa ký tự đầu tiên trong bộ nhớ đệm.
        cin.ignore();
        string s;
        cin >> s;
        result(s);
    }
    return 0;
}
