#include <stdio.h>
//cap phat dong 
int main(){
	//dataTypr *arraysName = (type_cast)malloc(size_of_byte)
	int *a = (int*)malloc(100 * sizeof(int));
	//ket qua ta duoc mot mang dong 
	int n = 5 ;
	for(int i = 0 ; i < 5 ; i++){
		scanf("%d", a+i);
		
	}
	
	for(int i = 0 ; i < 5 ; i++){
	printf("%d", *a+i);
		
	}
	
	
    return 0;
}

