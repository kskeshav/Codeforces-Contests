import sys
n = int(input())
l = [int(x) for x in input().split()]
count = 0
li = 0
for i in range(n-1):
	if(l[i]>l[i+1]):
		count +=1
		li = i
if(count == 0):
	print(0)
	sys.exit()
if(count == 1 and l[n-1]<=l[0]):
	print(n-1-li)
else:
	print(-1)