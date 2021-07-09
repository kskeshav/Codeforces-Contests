n,m = input().split()
n = int(n)
m = int(m)
a = [0]*n
ma = [0]*m
s = []
for i in range(n):
	inp = input()
	s.append(inp)
	l = [int(x) for x in s[i]]
	for j in range(m):
		if(ma[j]<l[j]):
			ma[j] = l[j]
for i in range(n):
	for j in range(m):
		if(int(s[i][j]) == ma[j]):
			a[i] = 1
print(sum(a))