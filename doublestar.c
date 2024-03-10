#include<stdio.h>
void main(){
	int a,i,j;
	
	printf("How many line or lines you wanna print?\n");
	scanf("%d",&a);
	
	for(i=a;i>=0;i--){
		if(i%2==0){
			for(j=0;j<i;j++){
				printf("*");
			}
		printf("\n");
	}
	}
	return(0);
}
