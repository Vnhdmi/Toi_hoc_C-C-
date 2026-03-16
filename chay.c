#include <stdio.h>

int main () {
	int n ;

	
	Tags:
		
		printf("Nhap so bat ky");
		scanf("%d", &n);
		
		if (n <=0) goto Tags ;
		for (int i = 1 ; i <= n; i++){
			if (i%2 == 0) continue ;
			printf("\n %d", i); 
		}
		
	
	return 0 ;
}
