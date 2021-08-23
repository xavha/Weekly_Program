#include<stdio.h>
int main(){
	int a[10];
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);		
	}
	printf("Data in array: ");
	for(int i=0;i<10;i++){
		printf("%d ",a[i]);		
	}
	printf("\nResult: ");
	for(int i=0;i<8;i++){
		if(a[i]%2==1){
			if((a[i]+a[i+2])%2==0)
				printf("%d ",a[i+1]);
		}
	}
}
