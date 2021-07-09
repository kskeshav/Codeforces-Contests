t = int(input())
for i in range(t):
	n,x,y = input().split()
	n = int(n)
	x = int(x)
	y = int(y)
	s = x+y
	if n<s:
		m1 = s-n+1
	else:
		m1 = 1
	m2 = s-1
	print(m1,m2)