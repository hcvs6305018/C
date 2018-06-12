#include<stdio.h>
#include<stdlib.h> 
int main(){
	int a,b;
	char c;
	printf("請輸入數值1,數值2,運算符號\n");
	scanf("%d,%d,%c" ,&a,&b,&c);
switch(c){
    case '+':{
		break;
	
    printf("%d+%d=%d",a,b,a+b);
    break;}
    case '-':{
		break;
    printf("%d-%d=%d",a,b,a-b);
    break;}
    case '*':{
		break;
    scanf("%d*%d=%d",a,b,a*b);
    break;} 
    case '/':{
		break;
    scanf("%d/%d=%d",a,b,a/b);
    break;}
    default :{
		break;
    printf("你打錯了");
	}
	}	
	return 0;
    }
