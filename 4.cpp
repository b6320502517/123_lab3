#include<stdio.h>
int main(){
	int i=0,j;
	long  x=0;
	if(x>=0&&x<=2000000000)
		scanf("%ld",&x);
	while(x>=0){
	
	if(x%2==0||x%3==0||x%5==0||x%7==0){
		
		if(i==0){
			x--;
			i++;	
		}
		else{
			printf("%ld ",x);
			break;
		}
				
	}
				
	else{
		printf("%ld ",x);
		break;
	}

	}
		
	return 0;
}
