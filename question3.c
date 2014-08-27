#include<stdio.h>

int main(void){

int W,H,N;
int i;
int ROAD;
int a[2];
int b[2];

	scanf("%d %d %d",W,H,N);
	scanf("%d %d",a[0],a[1]);
	for(i=1;i<N;i++){
		scanf("%d %d",b[0],b[1]);
		if(a[0]==b[0]){
			ROAD=ROAD+a[1]-b[1];
		}
		else if(a[1]==b[1]){
			ROAD=ROAD+a[0]-b[0];
		}
		else if(a[0]<b[0]&&a[1]>b[1]){
			ROAD=ROAD+(b[0]-a[0])+(a[1]-b[1]);
		}
		else if(a[0]>b[0]&&a[1]<b[1]){
			ROAD=ROAD+(a[0]-b[0])+(b[1]-a[1]);
		}
		else if(a[0]<b[0]&&a[1]<b[1]){
			ROAD=ROAD+(a[1]-b[1]);
		}
		else if(a[0]>b[0]&&a[1]<b[1]){
			ROAD=ROAD+(b[1]-a[1]);
		}
		a[0]=b[0];
		a[1]=b[1];
	}
	printf("%d",ROAD);
	return 0;
}
