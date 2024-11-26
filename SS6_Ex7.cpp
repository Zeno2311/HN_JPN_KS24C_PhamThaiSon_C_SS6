#include <stdio.h>
int main(){
	int songuyen;
	printf("Moi ban nhap so nguyen bat ki : ");
	scanf("%d",&songuyen);
	if(songuyen==0){
		printf("So 0 co vo so uoc\n");
	}else{
		printf("Cac uoc cua %d la : \n",songuyen);
	}
	for(int i=1;i<=songuyen;i++){
		if(songuyen%i==0){
			printf("%d",i);
		}
	}
	return 0;
}
