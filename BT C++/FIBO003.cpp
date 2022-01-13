//FIBO003 - Số phi Fibonacci kế tiếp
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
bool isPerfectSquare(ll int x)
{
    ll int s = sqrt(x);
    return (s * s == x);
}
 

bool isFibonacci(ll int N)
{
    // N là Fibinacci nếu một trong hai
    // (5 * N * N + 4), (5 * N * N - 4) hoặc cả hai
    // là một perferct square
    return isPerfectSquare(5 * N * N + 4)
           || isPerfectSquare(5 * N * N - 4);
}


int nextNonFibonacci(ll int N)
{
 
    // Trường hợp 1 
    // Nếu N <= 3, thì 4 sẽ là 
    // Số không phải Fibonacci tiếp theor
    if (N <= 3)
        return 4;
 
    // Trường hợp 2 
    // Nếu N + 1 là Fibonacci thì N + 2 
    // sẽ là Số không phải Fibonacci tiếp theo
    if (isFibonacci(N + 1))
        return N + 2;
 
    // Nếu N + 1 không phải Fibonacci, thì N + 2 
    // sẽ là Số Non-Fibonacci tiếp theo
    else
        return N + 1;
}
 

int main()
{	int t;
	cin>>t;
	while(t--){
	
    	ll int N;
    	cin>>N;
    	cout << nextNonFibonacci(N)<<endl;
    }
    return 0;
}