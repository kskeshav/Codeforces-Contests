t = int(input())
for i in range(t):
	n,m = input().split()
	n = int(n)
	m = int(m)
	if n%m == 0:
		print("YES")
	else:
		print("NO")