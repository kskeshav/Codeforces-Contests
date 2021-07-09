
t = int(input())
for j in range(t):
	s = input()
	t = input()
	l = [0]*26
	m = 0
	f = 0
	ans = 0
	for i in range(len(s)):
		if l[ord(s[i])-ord('a')] == 0:
			l[ord(s[i])-ord('a')] = i+1
	for i in range(len(t)):
		if l[ord(t[i])-ord('a')] == 0:
			print(-1)
			f = 1
			break
		if(l[ord(t[i])-ord('a')]<=m):
			ans+=1
		m = l[ord(t[i])-ord('a')]
	if f ==1:
		continue
	print(ans+1)
