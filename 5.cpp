#include<stdio.h>
int main(){
	unsigned int n=1,i,j=0,k,l,m=0;
	int c[10];
	if(n>0&&n<10000)
		scanf("%d",&n);
	k=n;
	for(i=2;n!=1;i++)
		for(;n%i==0;j++){
			c[j]=i;
			n=n/i;
		}
	j--;	
	l=j;
	for(i=0;i<j;i++)
		for(l=j;l>=0;l--)
			if(c[i]==c[l])
				m++;
		
	if(m==0)
		printf("%d is a Lucky Number",k);
	else
		printf("%d is not a Lucky Number",k);
	
	return 0;
}
