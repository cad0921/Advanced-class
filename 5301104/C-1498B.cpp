#include<bits/stdc++.h>
#define co ios::sync_with_stdio(0); cin.tie(0);
using namespace std;
bool can(int a , int b){
    return a>b;
}
int main() {
    co;
    int Cas;
    cin >> Cas;
    while (Cas--) {
        int n , w;
        cin>>n>>w;
        int x[(int)1e5+5] = {0};
        for(int i=0;i<n;i++){
            cin>>x[i];
        }
        sort(x , x+n , can);
        priority_queue<int> has;

        for(int i=0;i<n;i++){
            if(has.empty()){
                has.push(w);
            }
            if(has.top() < x[i]){
                has.push(w - x[i]);
            }else{
                int nw = has.top();
                has.pop();
                has.push(nw - x[i]);
            }
        }
        cout<<has.size()<<'\n';
    }
}