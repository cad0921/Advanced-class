#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		long long sum,num=0;
		double a,b;
		cin>>sum;
		while(n-->1){
			cin>>a;
			if(a/sum>k*0.01){
				b=ceil(a*100/k)-sum;
				num+=b;
				sum+=b;
			}
			sum+=a;
		}
		cout<<num<<'\n';
	}
	return 0;
}