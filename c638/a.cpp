#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
		{
			int n;
			cin>>n;
			n = int(n/2);
			cout<<2*(pow(2,n)-1)<<endl;
		}	
	return 0;
}