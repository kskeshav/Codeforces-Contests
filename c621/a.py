t = int(input())
for i in range(t):
	n,d = input().split()
	n = int(n)
	d = int(d)
	l = [int(x) for x in input().split()]
	ans = l[0]
	for j in range(1,n):
		d1 = int(d/j)
		if d1>l[j]:
			ans+=l[j]
			d-=l[j]
		else:
			ans+=d1
			break
	print(ans)