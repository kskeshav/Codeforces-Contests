n = int(input())
l = [int(x) for x in input().split()]
l2 = [0]
for i in range(n):
	if l[i]>=0:
		l[i] = 0
	else:
		l[i] = 1
cs = 0
for i in range(n):
	if l[i] == 1:
		l[i]+=cs
		cs+=1
for i in range(n):
	if l[i]>0 and l[i]%2 == 0:
		l2.append(i)
print(l2)
itr = 0
ans = 0
for i in range(n):
	if i<l2[itr]:
		ans+=l2[itr]-i
	else:
		itr+=1
		if itr == len(l2):
			break
		ans+=l2[itr]-i
ans+=n-l2[len(l2)-1 ]
print(ans)