t = int(input())
for i in range(t):
	l = []
	n = int(input())
	for i in range(2,n):
		if n%i == 0:
			l.append(i)
			n /= i
		if len(l) == 2 or i*i>n:
			break
	if len(l) == 2 and n!=l[0] and n!= l[1] and n>1:
		print("YES")
		print(l[0],l[1],int(n))
	else:
		print("NO")