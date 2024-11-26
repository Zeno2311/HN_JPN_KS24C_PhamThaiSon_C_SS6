#include <stdio.h>
int main(){
	int number,sum;	
	for(int i=1;i<=5;i++){
		printf("Nhap so nguyen %d : ",i);
		scanf("%d",&number);
		if(number%2 != 0){
			sum+=number;
		}
	}
	printf("Tong cac so le bang %d",sum);
	return 0;
}
