#include<stdio.h>
void main(){
	int a,i,j;
	
	printf("how many lines do you wanna print?\n");
	scanf("%d",&a);
	
	for(i=0;i<a;i++){
		for(j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
}
