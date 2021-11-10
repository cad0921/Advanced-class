#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,b=1,c;
	string s;
	int x[10]={0};
	cin>>n>>s;
	for(int i=0;i<n;i++){
		c=s[i]-'0';
		if(b){
			if(c>0){
				b=0;
				i--;
			}
		}else{
			if(c==4){
				x[3]++;
				x[2]+=2;
			}else if(c==6){
				x[5]++;
				x[3]++;
			}else if(c==8){
				x[7]++;
				x[2]+=3;
			}else if(c==9){
				x[7]++;
				x[2]++;
				x[3]+=2;
			}else if(c!=1)
				x[c]++;
		}
	}
	for(int i=9;i>1;i--)
		for(int j=0;j<x[i];j++)
			cout<<i;
	
	return 0;
}