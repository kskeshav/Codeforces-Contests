t = int(input())
for i in range(t):
	n = int(input())
	l = []
	for j in range(n):
		x,y = input().split()
		l.append((x,y))
	l.sort(key = lambda x:x[0])