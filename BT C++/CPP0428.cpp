// CPP0428 - TRỘN HAI DÃY VÀ SẮP XẾP
#include<bits/stdc++.h> 
using namespace std;
 main(){ 
 	int t; 
	cin>>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
		int d[100000],c[100000],e[100000];
		int i,j,r=1;
		for(i=1;i<=a;i++){
			cin>>c[i];
		}
		for(i=1;i<=b;i++){
			cin>>d[i];
		}
		for(i=1;i<=a;i++){
			e[i]=c[i];
		}
		for(i=a+1;i<=b+a;i++){
			e[i]=d[r];r++;
		}
		for(i=1;i<=a+b;i++){
			for(j=1+i;j<=a+b;j++){
				if(e[i]>e[j]) swap(e[i],e[j]);
		}
		}
		for(i=1;i<=a+b;i++){
			cout<<e[i]<<" ";
		}
	cout<<endl;
	}
}
