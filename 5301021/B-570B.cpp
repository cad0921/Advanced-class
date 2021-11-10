#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n , m;
    cin>>n>>m;
    if(n==1)
        cout<<1;
    else if(m<=n/2){
        cout<<m+1;
    }else{
        cout<<m-1;
    }
}