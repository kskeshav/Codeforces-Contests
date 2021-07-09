#include<stdio.h>
#include<string.h>
int main(){
	char s[2000];
	char fs[2000];
	int i = 1,k = 1,f = 0;
	scanf("%s",s);
	while(s[i] != '\0'){
		if(s[i] >=s[i-1]){
			k +=1;
		}
		if(f<k){
			f = k;
		}
		if(s[i]<s[i-1]){
			k = 1;
		}
		i +=1;
	}
	int j = 0;
	int n = strlen(s);
	if(f == n){
		for(int i = 0;i<f;i++){
			fs[i] = '0';
		}
	}
	else{
		while(j<n){
			for(int i = j;i<j+f-1;i++){
				fs[i] = '0';
				if(i == j+f-2){
					fs[i+1] = '1';
				}
			}
			j += f;
		}
	}	
	for(int i =0;i<n;i++){
		printf("%c",fs[i]);
	}
	printf("\n");
	return 0;
}