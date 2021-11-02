#include"iostream"
#include"math.h"
#include"iomanip"


using namespace std;

long long giaithua(int n){
	long long s=1;
	for(int i=1;i<=n;i++){
		s*=i;
	}
	return s;
}

int main(){
	unsigned int t;
	cin >>t;
	for(int i=0;i<t;i++){
		int  n;
		cin >> n;
		float s=1;
        for(int i=2;i<=n;i++){
        	s= pow(giaithua(i)+s, 1.0/(i+1));
		}
		cout << fixed << setprecision(3) << s << endl;
    }
    return 0;
}

