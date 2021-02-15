#include<stdio.h>
int main(){
	unsigned int i,j,k,x=0,n=1,m;
	unsigned int y[4];
	for(i=0;i<5;i++){
        for(j=0,x=0;j<4;j++){
        	if(n<6&&n>0)
            scanf("%d",&n);
            x=x+n;
        }
        y[i]= x;
    }
    k=y[0];
    for(i=1;i<5;i++){
    	if(k<y[i]){
    		k =y[i];
    		m=i+1;
		}
	}
    printf("%d %d",m,k);
    return 0;
}
