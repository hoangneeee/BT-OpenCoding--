// Chênh lệch lớn nhất giữa 0 và 1 trong dãy nhị phân
#include<bits/stdc++.h>
#define ll long long
using namespace std;

//kiểm tra chênh lệch giữa 0 và 1 trong dãy nhị phân
int check(string s) {
    int max = -1, l = s.size();
    for (int i = 0; i < l; i++) {
        for (int j = i; j < l; j++) {
            int count = 0, count1 = 0;
            for (int k = i; k <= j; k++) {
                if (s[k] == '1')
                    count1++;
                else
                    count++;
            }
            if (count - count1 > max)
                max = count - count1;
        }
    }
    return max;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << check(s) << endl;
    }
    return 0;
}