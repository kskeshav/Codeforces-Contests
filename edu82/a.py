t = int(input())
for i in range(t):
	s = input()
	l = 0
	r = 0
	ans = 0
	ss = 0
	for j in range(len(s)):
		if s[j] == '1':
			l = j
			break
	for j in range(len(s)-1,-1,-1):
		if s[j] == '1':
			r = j
			break
	for j in range(len(s)):
		if s[j] == '1':
			ss+=1
	if ss != 0:
		ans = r-l-ss+1
	else:
		ans = 0
	print(ans)