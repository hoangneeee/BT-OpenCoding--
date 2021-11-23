//NGTO006 - TÌM SỐ ĐẶC BIỆT LỚN NHẤT
#include <bits/stdc++.h>
#define ll long long
#define MAX 500000
using namespace std;

//check snt max
int check (int n)
{
	int max;
	while(n % 2 == 0)
	{
		max = 2; 
		n /= 2;
	}
	
	for(int i = 3; i <= sqrt(n); i+=2)
	{
		while(n % i == 0)
		{
			max = i;
			n /= i;
		}		
	}
	if(n > 1)
		return n;
	else
	 	return max ;
}

//so sanh vs can bac 2 cua so de cho
int res(int n)
{
    float a = sqrt(n);
	if(check(n)>a && n>=2) return n;
	return res(n - 1);
}

int main()
{
	int t;
	cin >> t;
	 	while(t--)
	 	{
	 	int n;
	 	cin >> n;
	 	cout << res(n) << endl;
	}
	return 0;
}