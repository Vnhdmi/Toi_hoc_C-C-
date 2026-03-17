#include<stdio.h>

void dec_to_bin(long n) {
	
	if(n<2){
		printf("%d", n);
	}else{
		dec_to_bin(n/2);
		printf("%d",(n%2));
	}
}

int main(){
long x ;
printf("Xin chao");	
printf("\n Nhap so can chuyen ve nhi phan");
scanf("%d", &x);
printf("\n %d Chuyen tu he 10 sang he 2 la : ", x);
dec_to_bin(x);
    return 0;
}

