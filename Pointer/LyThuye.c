#include <stdio.h>

void Ex1 (){
	 int N = 1000;
    printf("Dia chi cua N : %d\n", &N);
    int *ptr; //khai bao 
    //Gan ??a ch? c?a N cho ptr
    ptr = &N;
    printf("Gia tri cua ptr : %d\n", ptr);
    printf("Gia tri ma ptr quan ly %d \n" , *ptr);
    printf("Thay doi gia tri gian tiep qua ptr \n tuong tu a = 1001 ta dung *ptr = 1001 %d \n " , *ptr = 1001);
    // *ptr nay co nghia la toan tu giai tham chieu
    printf("Gia tri moi cua a = %d", N);
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
