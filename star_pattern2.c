#include<stdio.h>
void main(){
	int a,i,j;
	
	printf("how many do you wanna print?\n");
	scanf("%d",&a);
	
	for(i=0;i<a;i++){
		for(j=a;j>i;j--){
			printf("*");
		}
		printf("\n");
	}
}
