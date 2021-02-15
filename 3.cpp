#include<stdio.h>
int main(){
	unsigned int k=1,i;
	if(k>=1&&k<=1000)
		scanf("%d",&k);
	for(i=2;k!=1;i++)
		for(;k%i==0;){
			k=k/i;
			printf("%d\n",i);
		}
	printf("0");
return 0;
}
