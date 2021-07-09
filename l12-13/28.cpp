#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	int n,a,b;
	cin>>n>>a>>b;
	cout<<min(n-a,b+1)<<endl;
	return 0;
}