t = int(input())
for i in range(t):
	n = int(input())
	l = [int(x) for x in input().split()]
	l.sort()
	for j in range(n-1,-1,-1):
		print(l[j],end = " ")
	print()