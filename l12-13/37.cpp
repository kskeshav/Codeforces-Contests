#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	string s,f = "";
	cin>>s;
	transform(s.begin(), s.end(), s.begin(), ::tolower); 
	int n = s.size();
	for (int i = 0; i < n; ++i)
	{
		if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y')
		{
			f+=".";
			f+=s[i];
		}
	}
	cout<<f<<endl;
	return 0;
}