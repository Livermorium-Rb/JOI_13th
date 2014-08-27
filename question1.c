#include<stdio.h>

int main(){

int i;
unsigned int A;
unsigned int WA=0;

	for(i=0;i<5;i++){
		scanf("%d",&A);
		if(A<40){
			A=40;
		}
		WA=WA+A;
	}
	printf("%d",WA/5);
	return 0;
}
