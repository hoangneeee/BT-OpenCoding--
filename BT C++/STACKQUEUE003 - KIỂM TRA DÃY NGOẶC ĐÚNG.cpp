// STACKQUEUE003 - KIỂM TRA DÃY NGOẶC ĐÚNG
#include <bits/stdc++.h>
using namespace std;


bool checkBracketCharacter(string expression) {
	stack<char> s;
	char x;

	for (int i = 0; i < expression.length(); i++) 
    {
        if (expression[i] == '(' || expression[i] == '['
            || expression[i] == '{') 
        {
            // Push the element in the stack
            s.push(expression[i]);
            continue;
        }

        // IF current current character is not opening
        // bracket, then it must be closing. So stack
        // cannot be empty at this point.
        if (s.empty())
            return false;

        switch (expression[i]) {
        case ')':
            
            // Store the top element in a
            x = s.top();
            s.pop();
            if (x == '{' || x == '[')
                return false;
            break;

        case '}':

            // Store the top element in b
            x = s.top();
            s.pop();
            if (x == '(' || x == '[')
                return false;
            break;

        case ']':

            // Store the top element in c
            x = s.top();
            s.pop();
            if (x == '(' || x == '{')
                return false;
            break;
        }
    }

	return (s.empty());
}


int main() {
	int t;
	cin >> t;

	while (t--){
		char str[1024];
		cin >> str;

		if (checkBracketCharacter(str))
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}	
}