// FIBO001 - Tìm số thứ n không thuộc dãy Fibonacci
#include<bits/stdc++.h>
#define ll long long
#define MAX 500000
using namespace std;

 
// Trả về số không phải fibonacci thứ n
ll nonFibonacci(ll n)
{
    
    ll prevPrev=1, prev=2, curr=3;
 
    // Trong khi đếm các số không phải fibonacci
    // không trở nên âm hoặc không
    while (n > 0)
    {
        // Logic số Fibonacci đơn giản
        prevPrev = prev;
        prev = curr;
        curr = prevPrev + prev;
 
        // (curr - prev - 1) là số
         // các số không phải Fibonacci giữa curr
         // và prev
        n = n - (curr - prev - 1);
    }
 
    // n có thể là số âm. Hãy chắc chắn rằng nó
    // trở nên tích cực bằng cách xóa thêm lần cuối
    // khoảng cach.
    n = n + (curr - prev - 1);
 
    // n bây giờ phải là số dương và nhỏ hơn hoặc bằng
    // khoảng cách giữa hiện tại và trước đó, tức là
    // (curr - prev - 1);
 
    // Bây giờ thêm n dương vào Fibonacci trước đó
    // số cần tìm thứ n không phải fibonacci.
    return prev + n;
}

int main()
{
    int t;
    cin>>t;
    
    while(t--){
        ll n;
        cin>>n;
        
        cout << nonFibonacci(n)<<endl;
    }
   return 0;
}