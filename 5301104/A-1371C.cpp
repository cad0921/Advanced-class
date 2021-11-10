#include <bits/stdc++.h>
#define co std::ios::sync_with_stdio(0); std::cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    co;
    int n;
    cin>>n;
    while(n--){
        ll a ,b ,n , m;
        cin>>a>>b>>n>>m;
        if(m <= min(a,b) && n+m <= a+b){
            cout<<"Yes"<<'\n';
        }else{
            cout<<"No"<<'\n';
        }
        
        
        
    }

    return 0;
}