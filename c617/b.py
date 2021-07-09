t = int(input())
for i in range(t):
	n = int(input())
	ans = 0
	n1 = 0
	while(n>=10):
		n1 = int(n/10)
		ans+=10*n1
		n-=9*n1
	ans+=n
	print(ans)
