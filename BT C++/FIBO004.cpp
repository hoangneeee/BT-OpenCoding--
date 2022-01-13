// FIBO004 - Biểu diễn số N dưới dạng tổng của 2 số Fibonacci
#include<bits/stdc++.h>
#define ll long long
#define MAX 100
using namespace std;

ll fibo[MAX];

//sang fibo
void sangFibo(){
    fibo[0]=0;
    fibo[1]=1;
    fibo[2]=1;
    for(int i=3;i<90;i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
}
int main() {

    int t; 
    cin>>t;
    while(t--){
        int n; 
        cin>>n;
        
        sangFibo();
        int d =0;
        for(int i=0;i<90;i++){
            int count=0;
            for(int j=0;j<90;j++){
                if(fibo[i]+fibo[j]==n && fibo[i]!=fibo[j]){
                    cout<<fibo[i]<<" "<<fibo[j]<<endl;
                    d++;
                    count++;
                    break;
                }
                if(fibo[j]>n) break;
            }
            if(fibo[i]>n) break;
            if(count>0) break;
        }
        if(d==0) cout<< -1 <<endl;
    }
    return 0;
}
