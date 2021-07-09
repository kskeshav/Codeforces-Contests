import operator as op
from functools import reduce
def ncr(n, r):
    r = min(r, n-r)
    numer = reduce(op.mul, range(n, n-r, -1), 1)
    denom = reduce(op.mul, range(1, r+1), 1)
    return numer / denom
n = int(input())
l = [int(x) for x in input().split()]
mn = min(l)
mx = max(l)
c1 = 0
c2 = 0
for i in range(n):
	if(l[i] == mn):
		c1+=1
	if(l[i] == mx):
		c2+=1
if(mx == mn):
	a = int(ncr(c1,2))
else:
	a = c1*c2
print(mx-mn,a)