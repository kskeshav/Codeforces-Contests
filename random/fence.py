import sys
n= int(input())
l = [int(x) for x in input().split()]
m = min(l)
if(n<m):
	print(-1)
	sys.exit()
ll = []
for i in range(9):
	if(l[i] == m):
		ll.append(i)
d = int(n/m)
n-= d*l[ll[len(ll)-1]]
s = str(ll[len(ll)-1]+1)*d
ind= ll[len(ll)-1]
print(s)
for i in range(9):
	l[i]-=m
p = 1
mm = max(l)
for i in range(9):
	if(l[i] != 0 and l[i]<mm):
		mm = l[i]
print(mm,n,l)
while(n>0):
	if(n<mm):
		break
	for i in range(8,ind,-1):
		if(n>=l[i]):
			s = s[:p-1]+str(i+1) + s[p:]
			n-=l[i]
			p+=1
			break
print(s)