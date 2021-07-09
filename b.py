n = int(input())
l1 = [int(x) for x in input().split()]
l2 = [int(x) for x in input().split()]
i = 0
ans = 0
d = {}
for i in range(n):
	d[l1[i]] = i
for i in range(n):
	l2[i] = d.get(l2[i])
for i in range(n-1):
	if(l2[i]>l2[i+1]):
		ans+=1
print(ans)