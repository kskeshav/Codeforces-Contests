t = int(input())
for i in range(t):
	n = int(input())
	l = [n]
	for i in range(2,n):
		if int(n/i)>1:
			l.append(int(n/i))
		else:
			break
	l.append(1)
	l.append(0)
	print(len(l))
	n = len(l)
	for i in range(n-1,-1,-1):
		print(l[i],end = " ")
	print()