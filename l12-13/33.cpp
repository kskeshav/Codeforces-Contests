#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	string a,b,c;
	cin>>a>>b;
	ll an = stoi(a);
	ll bn = stoi(b);
	ll c1 = an+bn;
	c = to_string(c1);
	a.erase(std::remove(a.begin(), a.end(), '0'), a.end());
	b.erase(std::remove(b.begin(), b.end(), '0'), b.end());
	c.erase(std::remove(c.begin(), c.end(), '0'), c.end());
	an = stoi(a);
	bn = stoi(b);
	c1 = stoi(c);
	if (an+bn != c1)
	{
		cout<<"NO"<<endl;
	}
	else{
		cout<<"YES"<<endl;
	}
	return 0;
}