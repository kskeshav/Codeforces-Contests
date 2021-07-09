n = int(input())
l = [int(x) for x in input().split()]
s = sum(l)
me = min(l)
a = []
for i in range(n):
	if l[i] == me:
		a.append(i)
ms = sum(l[:a[0]])
i1 = 0
i2 = a[0]
for i in range(1,len(a)):
	if sum(l[a[i-1]:a[i]])>ms:
		ms = sum(l[a[i-1]:a[i]])
		i1 = a[i-1]
		i2 = a[i]
if sum(l[a[len(a)-1]+1:])>ms:
		ms = sum(l[a[len(a)-1]:])
		i1 = a[len(a)-1]
		i2 = n
for i in range(i1):
	print(me,end = " ")
for i in range(i1,i2):
	print(l[i],end = " ")
for i in range(i2,n):
	print(me,end = " ")