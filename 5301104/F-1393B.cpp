#include<bits/stdc++.h>

using namespace std;
#define co ios::sync_with_stdio(0); cin.tie(0); 

int const Max = 1e5 + 100;
int has[Max];

int main() {
    co;
    int Case, t;
    cin >> Case;
    int cnt2 = 0, cnt4 = 0;
    for (int i = 0; i < Case; i++) {
        cin >> t;
        cnt2 -= has[t] / 2;
        cnt4 -= has[t] / 4;
        has[t]++;
        cnt2 += has[t] / 2;
        cnt4 += has[t] / 4;
    }
    int ca;
    cin >> ca;
    while (ca--) {
        string s;
        cin >> s >> t;
        cnt2 -= has[t] / 2;
        cnt4 -= has[t] / 4;

        if (s[0] == '+')
            has[t]++;
        else
            has[t]--;
        cnt2 += has[t] / 2;
        cnt4 += has[t] / 4;
        if (cnt4 >= 1 && cnt2 >= 4)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}