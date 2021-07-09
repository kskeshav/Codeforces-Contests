n = int(input())
l = [int(x) for x in input().split()]
l1 = []
l2 = []
l3 = []
for i in range(n):
	if(l[i]<0):
		l1.append(l[i])
	elif(l[i] > 0):
		l2.append(l[i])
	else:
		l3.append(l[i])
if(len(l1)%2 == 0):
	l3.append(l1[len(l1)-1])
	l1 = l1[:len(l1)-1]
if(len(l2) == 0):
	l2.append(l1[len(l1)-1])
	l2.append(l1[len(l1)-2])
	l1 = l1[:len(l1)-2]
print(len(l1),end =" ")
for i in range(len(l1)):
	print(l1[i],end = " ")
print("")
print(len(l2),end = " ")
for i in range(len(l2)):
	print(l2[i],end =" ")
print("")
print(len(l3),end = " ")
for i in range(len(l3)):
	print(l3[i],end = " ")
print("")
	