#include <bits/stdc++.h>
#define co ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
using namespace std;

int main() {
    co;
    int n;
    cin>>n;
    ll *x=new ll[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    sort(x , x+n);
    ll sum[n+1];
    memset(sum , 0 , sizeof(sum));
    int can = 0;
    for(int i=1;i<=n;i++){
        if(sum[i-1]<=x[i-1]){
            sum[i] = sum[i-1]+x[i-1];
            can++;
        }else{
            sum[i] = sum[i-1];
        }

    }
    cout<<can<<'\n';
    return 0;
}