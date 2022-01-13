#include<iostream>
#include<string.h> 
using namespace std;
 
int main()
{
    char a;
	int t;
	cin >> t;
	while (t--){
		cin>>a;
    	if ( (a >= 'A') && (a <= 'Z') ){
            int k =  int (a) + 32 ;
            cout << char(k);
        } else if ( (a >= 'a') && (a<= 'z') ){
            int k = int (a) - 32;
            cout << char(k);
         }
		 cout << endl;
	}
	
   
    return 0;
}