#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int a[n];
	int pos[n+1];
	int c0[n],c1[n];
	for (int i = 0; i < n; ++i)
		{
			if (s[i] == '0')
			{
				a[i] = -1;
			}
			else{
				a[i] = 1;
			}
			pos[i] = -1;
		}
	pos[n] = -1;	
	pos[a[0]] =  0;
	int m = 0;
	for (int i = 1; i < n; ++i)
	{
		a[i]+=a[i-1];
		if (pos[a[i]] == -1)
		{
			pos[a[i]] = i;
		}
		else{
			m = max(m,i-pos[a[i]]);
		}
	}
	cout<<m<<endl;
	return 0;
}