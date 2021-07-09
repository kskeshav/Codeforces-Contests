a1 = int(input())
a2 = int(input())
k1 = int(input())
k2 = int(input())
n = int(input())
minn = 0
if k1<k2:
	maxn = min(a1,int(n/k1))
	n1=n-maxn*k1
	maxn+=int(n1/k2)
else:
	maxn = min(a2,int(n/k2))
	n1=n-maxn*k2
	maxn+=int(n1/k1)
minn = max(0,n-a1*(k1-1)-a2*(k2-1))
print(minn,maxn)