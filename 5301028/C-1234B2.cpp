#include <bits/stdc++.h>
#define co ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
using namespace std;

int main() {
    deque<int> x;
    map<int, int> sum;
    int n, k , ne;
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin>>ne;
        auto t = sum.find(ne);

        if(t == sum.end()){
            sum[ne] = 1;
            x.push_front(ne);
            if(x.size() > k){
                sum.erase(x.back());
                x.pop_back();
            }
        }

    }
    cout<<x.size()<<'\n';
    for(int i=0;i<x.size();i++){
        cout<<x[i]<<" ";
    }
    return 0;
}