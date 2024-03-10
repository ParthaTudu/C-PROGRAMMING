#include<stdio.h>
void main(){
	int a,i,j,k;
	
	printf("how many lines do you wanna print?\n");
	scanf("%d",&a);
	
	for(i=0;i<a;i++){
		for(j=0;j<i;j++){
			printf(" ");
		}
		for(k=a;k>0;k--)
			printf("*");
		printf("*\n");
	}
}
