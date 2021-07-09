n,d = input().split()
n = int(n)
d = int(d)
a = [0]*n
l = [int(x) for x in input().split()]
lp = n-1
rp = n-1
while(lp>=0):
	if(abs(l[rp])-abs(l[lp])<=d):
		lp-=1
	else:
		lp+=1
		a[rp] = int((rp-lp-1)*(rp-lp-2)/2)
		lp -=1
		rp -=1
a[rp] = int((rp-lp-1)*(rp-lp-2)/2)
if(abs(l[2])-abs(l[0])<=d):
	a[2] = 1
print(a)
print(sum(a))