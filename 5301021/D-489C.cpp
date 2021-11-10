#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,sum;
	cin>>n>>sum;
	int max[n]={0},min[n]={0};
	if(n==1){
		if(sum>=0 && sum<=9)
			cout<<sum<<' '<<sum;
		else
			cout<<"-1 -1";
	}else{
		if(sum>=1 && sum<=n*9){
			for(int i=0;i<n;i++){
				if(sum<=9){
					max[i]=sum;
					if(i!=n-1){
						min[n-i-1]=sum-1;
						min[0]=1;
					}else
						min[0]=sum;
					break;
				}else{
					sum-=9;
					max[i]=9;
					min[n-i-1]=9;
				}
			}
			for(int i=0;i<n;i++)
				cout<<min[i];
			cout<<' ';
			for(int i=0;i<n;i++)
				cout<<max[i];
		}else
			cout<<"-1 -1";
	}
	return 0;
}