#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int mod=1e9+7;
int main(){
	int n;cin>>n;
	int y;cin>>y;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int F[n];
	fill(F,F+n,1);
	int res=-1e9;
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i]>a[j]) F[i]=max(F[i],F[j]+1);	
		}
		res=max(res,F[i]);
	}
	cout<<res;
}