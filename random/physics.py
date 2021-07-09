n = int(input())
l = [int(x) for x in input().split()]
l.sort()
y = l[n-1]
x = l[0]
while y>2*x:
		