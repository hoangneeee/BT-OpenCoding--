// STACKQUEUE009 - PREFIX TO INFIX
#include <bits/stdc++.h>
using namespace std;
// PREFIX TO INFIX
bool isOperator(char x)
{
	switch (x)
	{
	case '+':
	case '-':
	case '/':
	case '*':
		return true;
	}
	return false;
}

// Convert prefix to Infix expression
string preToInfix(string expression)
{
	stack<string> s;

	// length of expression
	int length = expression.size();

	// reading from right to left
	for (int i = length - 1; i >= 0; i--)
	{

		// check if symbol is operator
		if (isOperator(expression[i]))
		{

			// pop two operands from stack
			string op1 = s.top();
			s.pop();
			string op2 = s.top();
			s.pop();

			// concat the operands and operator
			string temp = "(" + op1 + expression[i] + op2 + ")";

			// Push string temp back to stack
			s.push(temp);
		}

		// if symbol is an operand
		else
		{

			// push the operand to the stack
			s.push(string(1, expression[i]));
		}
	}

	return s.top();
}

// Driver Code
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin.ignore();
		string s;
		cin >> s;
		cout << preToInfix(s) << endl;
	}
	return 0;
}