#include <bits/stdc++.h>

#define co ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
using namespace std;

int main() {
    co;
    ll n, m;
    cin >> n >> m;
    ll a[n];
    ll b[m];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
        cin >> b[i];

    sort(a, a + n);
    int ans;
    for (int i = 0; i < m; i++) {
        int t = upper_bound(a , a+n , b[i])-a;
        cout<<t<<' ';
    }
    return 0;
}