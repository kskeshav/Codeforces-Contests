l = [int(x) for x in input().split()]
n = l[0]
l = l[1:]
l.sort()
a = l[0]
b = l[1]
c = l[2]
x = int(n/a)
y = 0
z = 0
m = 0
for i in range(x,-1,-1):
	r = n-i*a
	y = int(r/b)
	for j in range(y,-1,-1):
		t = n-i*a-j*b
		if t%c == 0:
			z = int(t/c)
			if i+j+z>m:
				m = i+j+z
print(m)