#include <bits/stdc++.h>
#define co ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
using namespace std;

int main() {
    int n , m;
    cin>>n>>m;
    int sum = 0;
    if(n >= m)
        cout<<n-m<<'\n';
    else{
        while(m > n){
            if(m%2 != 0){
                m++;
            }else
                m>>=1;
            sum++;
        }
        cout<<sum+n-m;
    }
    return 0;
}