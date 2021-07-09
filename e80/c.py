n,m = input().split()
n = int(n)
m = int(m)
ans = 0
mod = 1000000007
itr = n
for i in range(m,0,-1):
	addi = itr*(itr+1)/2
	ans = (ans+addi)%mod
	itr-=1
print(ans)