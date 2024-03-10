#include<stdio.h>
void main(){
	int a,i,j;
	
	printf("Entr the line number:\n");
	scanf("%d",&a);
	
	for(i=0;i<a;i++){
		if(j%2==0){
		for(j=0;j<i;j++){
				printf("*");
		}
		printf("\n");}
	}
}
