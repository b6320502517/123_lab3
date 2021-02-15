#include<stdio.h>
int main(){
	unsigned int i,j,k,x=0,m;
	unsigned int y[5],n[5][5]={};
	for(i=0;i<5;i++){
        for(j=0,x=0;j<4;j++){
        	if(n[i][j]<=5&&n[i][j]>=0)
            scanf("%d",&n[i][j]);
            x=x+n[i][j];
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
