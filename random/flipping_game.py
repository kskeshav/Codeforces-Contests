import sys
n = int(input())
s = [0]*n
m = -2
l = [int(x) for x in input().split()]
c = sum(l)
for i in range(n):
	if(l[i] == 1):
		l[i] = -1
	else:
		l[i] = 1
for i in range(n):
	for j in range(i+1,n+1):
		# print(i,j,sum(l[i:j]))
		if(m<sum(l[i:j])):
			m = sum(l[i:j])
print(c+m)