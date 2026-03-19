#include <stdio.h>

//pass-by-value
//pass-by-reference

void tang1 (int a){
	a+=100;
	printf("Gia tri cua a trong ham tang1 %d\n",a);
}

void tang2 (int *b){
	*b+=100;
	printf("Gia tri cua b trong ham tang2 %d\n",b);
}
void swap(int *x , int *y){
	int temp = *x ;
	*x = *y ;
	*y = temp ;
}
int main(){
	int n = 100;
	int x = 333;
	int y = 999;
	
	tang1(n);
	printf("Gia tri cua n sau khi tang1 ket thuc %d\n", n); 
	tang2(&n);
	printf("Gia tri cua n sau khi tang 2 ket thuc %d\n", n);
	swap(&x, &y);
	printf("Gia tri cua x, y sau khi swap x = %d y = %d",x,y);
    return 0;
}

