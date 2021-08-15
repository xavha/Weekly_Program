#include<stdio.h>
int main(){
	int a[3],t;
	scanf("%d %d %d",&a[0],&a[1],&a[2]);
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++)
			if(a[j]>a[j+1]){
				t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;				
			}
	}
	printf("%d",a[0]+a[1]);	
}
