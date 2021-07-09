import math
t= int(input())
for i in range(t):
	n,x = input().split()
	n = int(n)
	x = int(x)
	l = [int(x) for x in input().split()]
	m = math.ceil(x/2)
	f = 0
	a =[]
	for j in range(n):
		if l[j]>=m:
			ans = 2
			f = 1
			break
	for j in range(n):
		if l[j] == x:
			ans = 1
			f = 1
			break

	if f == 0:
		ans = int(math.ceil(x/max(l)))
	print(ans)