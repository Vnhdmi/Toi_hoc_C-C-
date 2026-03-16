#include <stdio.h>


void inSoTinhTong(){
	int n ;
	printf ("Hay nhap so n bat ki \n "); 
	scanf("%d", &n);
	
	if (n%3==0 && n%5==0){
		printf("FizzBuzz") ;
	}
	else if(n%3 ==0) {
		printf("Fizz");
	}else if (n%5 == 0){
		printf("Buzz");
	}
	else{
		printf("%d" , n) ;
	}
	
	int sum ;
	for(int i= 1 ; i <= n; i++) {
		sum+=i ;
	}
	
	printf(" \n Tong cac so tu 1 den %d la: %d " , n , sum);
}

int main () {
	
		
		inSoTinhTong();
	return 0;
	
}

