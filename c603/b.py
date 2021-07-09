t = int(input())
for i in range(t):
	l1 = [0]*10
	n = int(input())
	l2 = []
	k = 0
	m = [0]*n
	for i in range(n):
		e = int(input())
		l1[int(e/1000)] = 1
		if e in l2:
			m[i] = 1
		l2.append(e)
	for i in range(n):
		if m[i] == 1:
			k+=1
			for j in range(10):
				if l1[j] != 1:
					l2[i] = l2[i]%1000+j*1000
					l1[j] = 1
					break
	print(k)
	for i in range(n):
		if int(l2[i]/10) == 0:
			print('000'+str(l2[i]))
		else:
			if int(l2[i]/100) == 0:
				print('00'+str(l2[i]))
			else:
				if int(l2[i]/1000) == 0:
					print('0'+str(l2[i]))
				else:
					print(l2[i])