
def min_sum(n,l,r):
	for i in range(n-l):
		fa.append(1)
	c = 2
	for i in range(l):
		fa.append(c)
		c = c*2
	return sum(fa)
n = int(input()) ,
l = int(input()) ,
r = int(input())
print(min_sum(n,l,r))

