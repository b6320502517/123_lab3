#include<stdio.h>
int main(){
	int n=1,i,j=0,k;
	int c[4]={};
	//if(n>0&&n<10000)
		scanf("%d",&n);
	k=n;
	for(i=2;n!=1;i++)
		for(;n%i==0;j++){
			c[j]=i;
			n=n/i;
		}
			
		
	if(c[0]!=c[1]&&c[0]!=c[2]&&c[1]!=c[2])
		printf("%d is a Lucky Number",k);
	else
		printf("%d is not a Lucky Number",k);
	
	return 0;
}
