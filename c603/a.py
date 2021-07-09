t = int(input())
for i in range(t):
	l = [int(x) for x in input().split()]
	l.sort()
	ans = min(l[0]+l[1],int(l[0]+l[1]+l[2])/2)
	print(int(ans))