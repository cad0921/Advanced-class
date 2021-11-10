#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		if(n==1)
			cout<<"FastestFinger\n";	
		else if(n%2!=0 || n==2)
			cout<<"Ashishgup\n";
		else{
			int x=0,y=1;
			while(n%2==0){
				x++;
				n/=2;
			}
			if(n==1)
				y=0;
			for(int i=3;i<=sqrt(n);i++){
				if(n%i==0){
					y=2;
					break;
				}
			}
			if(y==0 || (x==1 && y==1))
				cout<<"FastestFinger\n";
			else
				cout<<"Ashishgup\n";
		}
	}
	return 0;
}
