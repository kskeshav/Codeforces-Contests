t = int(input())
for i in range(t):
	a,b,c = input().split()
	a = int(a)
	b = int(b)
	c = int(c)
	if a>4:
		a = 4
	if b>4:
		b = 4
	if c>4:
		c = 4
	ans = a+b+c-min(a,b,c)
	print(ans)