import sys
n = int(input())
l1 = [int(x) for x in input().split()]
m = int(input())
l2 = [int(x) for x in input().split()]
if(m>n):
	a1 = 2*n
	b1 = 2*m
	d = min(l1)
	a2 = 0
	b2 = 0
	for i in range(m):
		if(l2[i]<d):
			b2+=2
		else:
			b2+=3
	a2 = 3*n
	if(a1-b1>a2-b2):
		print(str(a1)+":"+str(b1))
	else:
		print(str(a2)+":"+str(b2))
else:
	d = min(l1)
	a2 = 0
	b2 = 0
	for i in range(m):
		if(l2[i]<d):
			b2+=2
		else:
			b2+=3
	a2 = 3*n
	print(str(a2)+":"+str(b2))