#include<stdio.h>
int main(){
	int i=0,j;
	long  x=0;
	if(x>=0&&x<=2000000000)
		scanf("%ld",&x);
	if(x==0||x==1)
		printf("2");
	while(x>2)
	if((x%2==0||x%3==0||x%5==0||x%7==0)&&(x!=2 && x!=3 && x!=5 && x!=7))
		x--;
		
				
	else{
		printf("%ld ",x);
		break;
	}
	
	
	return 0;
}
