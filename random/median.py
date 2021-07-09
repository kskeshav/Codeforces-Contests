import sys
n,x= input().split()
n = int(n)
x = int(x)
l = [int(x) for x in input().split()]
l.sort()
il = 0
ir = 0
m = int((n+1)/2)-1
if(l[m] == x):
	print(0)
	sys.exit()
if(l[0]>x or l[n-1]<x):
	print(n+1)
	sys.exit()
if(x not in l):
	l.append(x)
	l.sort()
print(l)
print(len(l))
for i in range(n):
	if(l[i] == x):
		il = i
		break
for i in range(n-1,-1,-1):
	if(l[i] == x):
		ir = i
		break
print(il,ir)
if(abs(n-2*(il+1))<abs(n-2*(ir+1))):
	print(1)
	itr = abs(n-2*(il+1))
else:
	print(2)
	itr = abs(n-2*(ir+1))
if n%2 == 0:
	print(itr-1)
else:
	print(itr)
# clt = 0
# cmt = 0
# e = 0
# for i in range(n):
# 	if(l[i]<x):
# 		clt+=1
# 	if(l[i] == x):
# 		e+=1
# 	if(l[i]>x):
# 		cmt+=1
# countmin = min(clt,cmt)
# countmax = max(clt,cmt)
# if(countmax-countmin != 0):
# 	print(countmax-countmin)
# else:
# 	print(1)