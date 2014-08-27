#include<stdio.h>

int main(){

int N,M,i,j,B,RESULT_;
int A[1000];
int A_[1000];
int RESULT=0;

	scanf("%d %d",&N,&M);
	for(i=0;i<N;i++){
		scanf("%d",A[i]);
	}
	for(j=0;j<M;j++){
		scanf("%d",&B);
		for(i=0;i<N;i++){
			if(A[i]<=B){
				A_[i]++;
				goto x;
			}
		}
		x: RESULT_=A_[1];
	}
	for(i=0;i<N;i++){
		if(A_[i]>RESULT_){
			RESULT=i;
		}
		else{
			break;
		}
	}
	printf("%d",RESULT);
	return 0;
}
