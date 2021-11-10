#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define co ios::sync_with_stdio(0); cin.tie(0);
ll const Max = 3e9+5;
int main() {
    co;
    int Case;
    cin>>Case;
    while(Case--){
        int n , m;
        string a , b;
        cin>>n>>m>>a>>b;
        int a_num[26]={0} , b_num[26] = {0};
        for(int i=0;i<n;i++)
            a_num[a[i]-'a']++;
        for(int i=0;i<n;i++)
            b_num[b[i]-'a']++;
        int can = 1;

        for(int i=0;i<26;i++){
            if(a_num[i] == b_num[i])
                continue;
            else if(a_num[i] >b_num[i]){
                a_num[i+1] += ((a_num[i] - b_num[i])/m) * m;
            }else{
                can = 0;
                break;
            }
        }
        if(can)
            cout<<"Yes"<<'\n';
        else
            cout<<"NO"<<'\n';
    }

}