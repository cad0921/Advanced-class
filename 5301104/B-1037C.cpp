#include <bits/stdc++.h>
#define co std::ios::sync_with_stdio(0); std::cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    co;
    int n;
    cin>>n;
    string a , b;
    cin>>a>>b;
    int sum = 0;
    for(int i=0;i<n-1;i++){
        if(a[i] != b[i]){
            if(a[i] == b[i+1] && a[i+1] != b[i+1]){
                swap(a[i] , a[i+1]);
            }
            sum++;
        }
    }
    if(a[n-1] != b[n-1])
        sum++;
    cout<<sum<<'\n';
    return 0;
}