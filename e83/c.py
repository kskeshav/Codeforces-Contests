import math
def mpow(b,p):
	if p!= -1:
		return pow(b,p)
	return 0
t = int(input())
for ir in range(t):
	n,k = input().split()
	n = int(n)
	k = int(k)
	l = [int(x) for x in input().split()]
	l.sort()
	mm = pow(10,16)
	s = int(math.log(mm,k))
	c = n-1
	for i in range(s,-2,-1):
		if l[c] == 0:
			c = -1
			break
		if mpow(k,i) == l[c]:
			c-=1
		if mpow(k,i) < l[c]:
			l[c] -= mpow(k,i)
			l.sort()
	if c == -1:
		print("YES")
	else:
		print("NO")