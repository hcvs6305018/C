#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b,m;
	printf("請輸入一個數:");
	scanf("%d"&a);
	m=rand()%49+1;
	printf("數字2:%d",m);
		m=rand()%49+1;
	printf("數字3:%d",a);
		m=rand()%49+1;
	printf("數字4:%d",b);
		m=rand()%49+1;
	printf("數字5:%d",c);
		m=rand()%49+1;
	printf("數字6:%d",d); 
	if(a==m)
	printf("\n答對");
	else
	printf("\n答錯");
	return 0
} 
