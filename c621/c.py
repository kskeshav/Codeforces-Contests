s = input()
l = [0]*26
for i in range(len(s)):
	l[ord(s[i])-ord('a')]+=1
ans = 1
for i in range(26):
	if l[i] != 0:
		ans = ans*l[i]
print(ans)