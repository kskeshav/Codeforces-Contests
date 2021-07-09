#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[n];
	int m = 1e5+5;
	int c[m] = {0};
	for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			c[a[i]]++;
		}
	int v4 = 0,v2 = 0,v8 = 0,v6 = 0;
	for (int i = 0; i < m; ++i)
	{
		if (c[i]>=8)
		{
			v8++;
		}
		if (c[i]>=6 && c[i]<8)
		{
			v6++;
		}
		if (c[i]>=4 && c[i]<6)
		{
			v4++;
		}
		if (c[i]>=2 && c[i]<4)
		{
			v2++;
		}
	}
	int q;
	cin>>q;
	for (int i = 0; i < q; ++i)
	{
		char o;
		int x;
		cin>>o>>x;
		if (o == '+')
		{
			c[x]++;
			if (c[x] == 8)
			{
				v8++;
				v6--;
			}
			if (c[x] == 6)
			{
				v6++;
				v4--;
			}
			if (c[x] == 4)
			{
				v4++;
				v2--;
			}
			if (c[x] == 2)
			{
				v2++;
			}
		}
		else{
			c[x]--;
			if (c[x] == 7)
			{
				v8--;
				v6++;
			}
			if (c[x] == 5)
			{
				v6--;
				v4++;
			}
			if (c[x] == 3)
			{
				v4--;
				v2++;
			}	
			if (c[x] == 1)
			{
				v2--;
			}
		}
		if (v8>0 || (v8+v6+v4)>=2)
		{
			cout<<"YES"<<endl;
			continue;	
		}
		else{
			if (v4>0 && v2>=2)
			{
				cout<<"YES"<<endl;
				continue;
			}
			else{
				if (v6>0 && v2>0)
				{
					cout<<"YES"<<endl;
					continue;
				}
				cout<<"NO"<<endl;
				continue;
			}
		}
	}
	return 0;
}