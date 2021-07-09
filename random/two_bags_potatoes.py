y,k,n = input().split()
y = int(y)
k = int(k)
n = int(n)
l = []
t = k*int(n/k)
x = t-y
while(x>0):
	l.append(x)
	x-=k
if(len(l) == 0):
	print(-1,end = "")
for i in range(len(l)-1,-1,-1):
	print(l[i],end = " ")
print()