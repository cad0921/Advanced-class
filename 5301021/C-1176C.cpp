#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t,n,sum=0;
	cin>>t;
	int x[43]={0};
	x[4]=0,x[8]=1,x[15]=2,x[16]=3,x[23]=4,x[42]=5;
	int y[6]={0};
	while(t--){
		cin>>n;
		if(n==4){
			y[0]++;
		}else{
			if(y[x[n]-1]>0){
				y[x[n]-1]--;
				y[x[n]]++;
			}else
				sum++;
		}
	}
	for(int i=0;i<5;i++)
		sum+=y[i]*(i+1);
	cout<<sum;
	return 0;
}