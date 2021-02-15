#include<stdio.h>
int main(){
	int n,p,a,i,k=0,l;
	unsigned int t[48]={};
	if(n>=1&&n<=10000)
		scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a,&p);
		t[a-1]+=p;
	}
	for(i=0;i<48;i++){
		if(k<t[i]){
			k=t[i];
			l=i;
		}
	}
	printf("%d %ld",l+1,t[l]);
	return 0;
}
