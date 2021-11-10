#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define co ios::sync_with_stdio(0); cin.tie(0);

ll const Max = 3e9+5;

int main() {
    co;
    ll n , time;
    cin>>n>>time;
    ll x[n+1];
    for(int i=0;i<n;i++)
        cin>>x[i];

    sort(x , x+n);
    int mid = n/2;
    int sum = x[mid];
    ll t = 0;
    ll i;
    for(i=mid+1;i<n;i++){
        t = time;
        time -= (x[i] - x[i-1]) * (i-mid);

        if(time<0)
            break;

        sum = x[i];
    }
    if(time>=0){
        cout<<sum+(time / (mid+1));
    }else{
        cout<<sum+t/(i-mid);
    }

}