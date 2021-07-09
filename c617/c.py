t = int(input())
for i in range(t):
	n = int(input())
	s = input()
	x = 0
	y = 0
	c = 0
	ansi = 0
	ansj = 0
	m = n
	l = [[0]*n for k in range(n)]
	l[0][0] = 1
	for j in range(n):
		if s[j] == 'L':
			x-=1
		if s[j] == 'R':
			x+=1
		if s[j] == 'U':
			y+=1
		if s[j] == 'D':
			y-=1
		if(l[x][y] != 0):
			if c<m:
				m = c
				c = 0
				ansi = l[x][y]
				ansj = j+1
		l[x][y] = j+2
	if ansi == 0 and ansj == 0:
		print(-1)
	else:
		print(ansi,ansj)