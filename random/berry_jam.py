t = int(input())
for i in range(t):
	n = int(input())
	l = [int(x) for x in input().split()]
	r = 0
	b = 0
	for i in range(2*n):
		if l[i] == 1:
			r +=1
		else:
			b +=1
	l1 = []
	l2 = []
	for i in range(n-1,-1,-1):
		l1.append(l[i])
	for i in range(n,2*n):
		l2.append(l[i])
	i1 = 0
	i2 = 0
	c = 0
	while r != b:
		if r>b:
			if :
					pass	
