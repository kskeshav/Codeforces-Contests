#include<bits/stdc++.h>
using namespace std;
#define ld long double
ld nCr(int n, int k) 
{ 
    int a[k+1]; 
    memset(a, 0, sizeof(a)); 
    a[0] = 1;
    for (int i = 1; i <= n; i++) 
    {
		for (int j = min(i, k); j > 0; j--) 
		a[j] = a[j] + a[j-1]; 
    }
    return a[k]; 
} 
int main(int argc, char const *argv[])
{
	string s,t;
	cin>>s>>t;
	int ans = 0,a = 0,c = 0;
	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] == '+')
		{
			ans+=1;
		}
		else{
			ans-=1;
		}
	}
	for (int i = 0; i < t.length(); ++i)
	{
		if (t[i] == '+')
		{
			a+=1;
		}
		else if (t[i] == '-')
		{
			a-=1;
		}
		else{
			c+=1;
		}
	}
	ld total = pow(2,c);
	int r =(ans-a);
	if (abs(r)>c)
	{	
		cout<<fixed<<setprecision(9)<<0.0<<endl;
		return 0;
	}
	r = abs((c+r)/2);
	r = nCr(c,r);
	cout<<fixed<<setprecision(9)<<r/total<<endl;
	return 0;
}