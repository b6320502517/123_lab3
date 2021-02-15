#includde<stdio.h>
int main(){
	int x,i,j,k;
	int c[4];
	if(x>0&&x<10000)
		scanf("%d",&x);
	k=x;
	for(i=2;x!=1;i++)
		for(j=0;x%i==0;j++){
			c[j]=i;
			x=x/i;
		}
			
		
	if(c[0]!=c[1]&&c[0]!=c[2]&&c[1]!=c[2])
		printf("%d is a Lucky Number",k);
	else
		printf("%d is not a Lucky Number",k);
	
	return 0;
}
