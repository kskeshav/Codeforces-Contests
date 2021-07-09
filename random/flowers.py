l = [int(x) for x in input().split()]
a2 = 0
a3 = 0
a1 = int(l[0]/3)+int(l[1]/3)+int(l[2]/3)
if(l[0] >0 and l[1] >0 and l[2] >0):
	a2 = int((l[0]-1)/3)+int((l[1]-1)/3)+int((l[2]-1)/3)+1
if(l[0] >1 and l[1] >1 and l[2] >1):
	a3 = int((l[0]-2)/3)+int((l[1]-2)/3)+int((l[2]-2)/3)+2
print(max(a1,a2,a3))