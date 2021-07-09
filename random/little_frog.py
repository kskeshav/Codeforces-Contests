n = int(input())
for i in range(int(n/2)):
	print(i+1,n-i,end = " ")
if n%2 != 0:
	print(int(n/2)+1)