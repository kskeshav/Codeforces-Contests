#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int power(long long n,int p){
	if(p ==0){
		return 1;
	}
	if(p == 1){
		return n;
	}
	long long n1 = n;
	while(p>1){
		n = n*n1;
		p -= 1;
	}
	return n;
}
int ans(long long n){
	long long n1 = 4;
	int k =1;
	while(n1<n){
		n1 = n1*4;
		k += 1;
	}
	return k;
}
int main(){
	char s[1000000];
	scanf("%s",s);
	long long n = 0;
	int l = strlen(s);
	for(int i = 0;i<l;i++){
		n += (s[l-i-1]-48)*power(2,i);
		printf("%lld\n",n);
	}
	printf("%lld\n",n);
	printf("%d\n",ans(n));
	return 0;
}