import sys
l = [int(x) for x in input().split()]
n = l[0]
p = l[1]
w = l[2]
d = l[3]
draw = 0
while((p-draw*d)%w != 0):
	draw +=1
