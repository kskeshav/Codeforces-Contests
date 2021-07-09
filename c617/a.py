t = int(input())
for i in range(t):
	c1 = 0
	c2 = 0
	n = int(input())
	l = [int(x) for x in input().split()]
	s = sum(l)
	if s%2 != 0:
		print("YES")
		continue
	for j in range(n):
		if(l[j]%2 != 0):
			c1+=1
		else:
			c2+=1
	if c1%2 == 0:
		if c1 != 0 and c2 != 0:
			print("YES")
		else:
			print("NO")
	else:
		print("YES")