#include<stdio.h>
int min_sum_arr(int n,int l,int r,int c){
	int a = 0;
	for (int i = 0; i < n-l+1; ++i)
	{
		a += c;
	}
	n = l-1;
	l = l-1;
	if(n>0 && l>0){
		a+=min_sum_arr(n,l,r,c*2);
	}
	return a;
}
int max_sum_arr(int n,int l,int r){
	int a = 0,c = 1;
	for(int i = 0;i<r;i++){
		a +=c;
		if(i+1<r){
			c = c*2;
		}
	}
	for(int i = 0;i<n-r;i++){
		a +=c;
	}
	return a;
}
int main(){
	int n,l,r;
	scanf("%d %d %d",&n,&l,&r);
	printf("%d %d\n",min_sum_arr(n,l,r,1),max_sum_arr(n,l,r));
	return 0;
}