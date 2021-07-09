n,a,b,k = input().split()
n = int(n)
a = int(a)
b = int(b)
k = int(k)
m = []
l = [int(x) for x in input().split()]
s = a+b
ans = 0
while(i<len(l)):
	if(l[i]%s != 0):
		if l[i]>a and l[i]<s:
			continue
		else:
			ans+=1
			l.pop(i)
l.sort()
for i in range(len(l)):
	if l[i]<b:
		x = int(l[i]/a)
		if l[i]%a == 0:
			m.append(x-1)
		else:
			m.append(x)
	else:
		m.append(int(b/a))
m.sort()
s = 0
for i in range(len(m)):
	s+=m[i]
	if s>k:
		ans+=i
print(ans)

