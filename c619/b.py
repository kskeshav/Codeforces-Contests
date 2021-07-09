t = int(input())
for i in range(t):
	n = int(input())
	l = [int(x) for x in input().split()]
	ne = 0
	ll = []
	for j in range(n):
		if l[j] != -1:
			ll.append(l[j])
			ne+=1
	if ne == 0:
		a = 1
	else:
		a = int((max(ll)+min(ll))/2)
	for j in range(n):
		if l[j] == -1:
			l[j] = a
	m = 0
	for j in range(1,n):
		if abs(l[j]-l[j-1])>m:
			m = abs(l[j]-l[j-1])
	print(m,a)