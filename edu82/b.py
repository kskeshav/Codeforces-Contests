t = int(input())
for i in range(t):
	n,g,b= input().split()
	n = int(n)
	g = int(g)
	b = int(b)
	n1 = 0
	s= g+b
	if n%2 == 0:
		n1 = int(n/2)
	else:
		n1 = int(n/2)+1
	n2 = n-n1
	m1 = int(n1/g)
	print(n1,n2,g,b)
	rg = n1%g
	m2 = int(n2/b)
	rb = n2%b
	print(m1,m2,rg,rb)
	m = max(m1,m2)
	ans=m*s+rg+rb

	print(ans)
