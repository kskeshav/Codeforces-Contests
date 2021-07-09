n,m,k = input().split()
n = int(n)
m = int(m)
m-=1
k = int(k)
lp = 0
rp = n-1
count = 0
ans = 0
l = [int(x) for x in input().split()]
l.sort()
s = [0]*n
s[0] = l[0]
for i in range(1,n):
	s[i] = l[i]+s[i-1]
print(l)
print(s)
while count<k:
	if l[rp]-l[lp] == m:
		ans+=s[rp]-s[lp]+l[lp]
		count+=1
	if l[rp]-l[lp]>m:
		lp+=1
	else:
		rp-=1
		lp = 0
print(ans)