#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	int x1,x2,x3,x4,y1,y2,y3,y4;
	cin>>x1>>y1>>x2>>y2;
	if (x1 == x2)
	{
		x3 = x1+abs(y1-y2);
		cout<<x3<<" "<<y2<<" "<<x3<<" "<<y1<<" "<<endl;
		return 0;
	}
	if (y1 == y2)
	{
		y3 = y1+abs(x1-x2);
		cout<<x2<<" "<<y3<<" "<<x1<<" "<<y3<<" "<<endl;
		return 0;
	}
	if (abs(x1-x2) != abs(y1-y2))
	{
		cout<<-1<<endl;
		return 0;
	}
	cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<endl;
	return 0;
}

