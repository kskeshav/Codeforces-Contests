#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		string s;
		cin>>s;
		int n = s.size();
		int res = 0;
		for(int j = 0;j<1e5;j++){
	    	int cur = j;
	    	int ok = 1;
		    for(int i = 0;i<n;i++){
		        res += 1;
		        if (s[i] == '+'){
		            cur = cur + 1;
		        }
		        else{
		            cur = cur - 1;
		        }
		        if (cur < 0){
		            ok = 0;
		            break;
		        }
		    }
		    if (ok){
		        break;
		    }
		}
		cout<<res<<endl;
	}
	return 0;
}