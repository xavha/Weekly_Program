#include<stdio.h>
int main(){
	int a[3],num;
	scanf("%d %d %d",&a[0],&a[1],&a[2]);
	int max=a[0];
	for(int i=0;i<3;i++){
		num+=a[i];
		if(max<a[i])
			max=a[i];
	}	
	printf("%d",num-max);
}
