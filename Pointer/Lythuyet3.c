#include <stdio.h>

int main(){
int a[] = {1,2,3,4,5};
printf("Gia tri cua bien a %d\n" , a);

	for(int i = 0 ; i <5 ; i++){
		printf("Dia chi cua phan tu thu %d la %d \n", i ,&a[i]);
	}
	int *ptr = &a[0];
	printf("Gia tri ptr %d\n", *ptr);
	//mot cach khac voi mang 
	int b[5];
	for(int i = 0; i<5 ;i++ ){
		scanf("%d", b+i); //b+i : b&[i]  
	}
	//in gia tri 
		for(int i = 0; i<5 ;i++ ){
		printf("%d", *b + i); // *b+i = b[i] 
	}
    return 0;
}

