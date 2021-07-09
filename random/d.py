import sys
a,b,c,d = input().split()
a = int(a)
b = int(b)
c = int(c)
d = int(d)
f = 0
a1 = a
b1 = b
c1 = c
d1 = d
n = a+b+c+d
l = [0]*n
if((d>c and b != 0)or b<a):
	print("NO")
	sys.exit()
if(d == c or b>a+1):
	for i in range(n-1,n-2*d-1,-2):
		l[i] = 3
		l[i-1] = 2
	c-=d
elif(d>c):
	for i in range(n-1,0,-2):
		l[i] = 3
		l[i-1] = 2
	c = 0
	l[0] = 3
else:
	for i in range(n-1,n-2*d-1,-2):
		l[i] = 2
		l[i-1] = 3
	l[n-2*d-1] = 2
	c-=d+1
n = a+b+c
if(c!=0):
	if(b<c):
		print("NO")
		sys.exit()
	if(d != 0):
		for i in range(n-1,n-2*c-1,-2):
			l[i] = 1
			l[i-1] = 2
	else:
		for i in range(n-1,n-2*c-1,-2):
			l[i] = 2
			l[i-1] = 1
	b-=c
	n = a+b
if b != 0:
	if l[n] == 2:
		for i in range(n-1,0,-2):
			l[i] = 1
			l[i-1] = 0
	else:
		for i in range(n-1,0,-2):
			l[i] = 0
			l[i-1] = 1
	l[0] = (l[1]+1)%2
if(l.count(0) != a1 or l.count(1) != b1 or l.count(2) != c1 or l.count(3) != d1):
	print("NO")
	sys.exit()
print("YES")
for i in range(len(l)):
	print(l[i],end = " ")
print()