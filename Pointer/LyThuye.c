#include <stdio.h>

void Ex1 (){
	 int N = 1000;
    printf("Dia chi cua N : %d\n", &N);
    int *ptr;
    //Gan ??a ch? c?a N cho ptr
    ptr = &N;
    printf("Gia tri cua ptr : %d\n", ptr);
}
int main(){
    //Dau * ki hieu con tro
    int *ptr; //con tro kieu int
    //Dau * con tro co the de canh bien hoac kieu du lieu 
    //Bien con tro cung can co dai chi T_T nen la so dau * se  la cap con tro 
    /*
		Ex *ptr **ptr
	*/
    long long* ptr2; // Con tro kieu long
    char *ptr3;
    Ex1();
    return 0;
}
