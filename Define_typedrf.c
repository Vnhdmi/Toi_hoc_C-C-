#include <stdio.h>
//dinh nghia ten cho kieu du lieu
typedef int soNguyen;


//tuong tu typedef
//dinh nghia ten cho gia tri thuong la hang so
//dinh nghia ten cho cau truc
#define incaulenh printf(" \n Cau lenh duoc in bang define")
#define findMax(a, b) printf("%d\n", a < b ? a : b) 


int main (){
	
	soNguyen x = 0;
	printf(" \n typedef %d", x);
	incaulenh;
	
	
	
	return 0;
	
}
