import sys
n,k = input().split()
n = int(n)
k = int(k)
l = [int(x) for x in input().split()]
if(min(l) == max(l)):
	print(0)
	sys.exit()
l.sort()
a = []
f = [0]*100000
a.append(0)
for i in range(n-1):
	f[l[i]] +=1
	a.append(l[i+1]-l[i])
f[l[n-1]] +=1
mn = 0
mx = 0
for i in range(1,int(n/2)+1):
	if(k>f[l[i]]):
		k-=(f[l[i]])*a[i]
		f[l[i+1]]+=1
		mn = l[i+1]
	if(k>f[l[n-i]]):
		k-=f[l[n-i]]
		f[l[n-i-1]]+=1
		mx = l[n-i-1]
print(mx-mn)
print(l)
print(a)
print(f[0:max(l)+1])