#include <stdio.h>
#include <string.h>
int main(){
	//Khoi tao chuoi 
	char a[100];
	char b[100] = {"Co the viet nhu nay"};
	char c[100] = {'n','h','u','n','a','y'};
	//inchuoi 
	
	printf(" Chuoi dc in truc tiep %s \n ", b); // in ca chuoi
    printf("In do dai chuoi strlens = %d \n", strlen(b)) ; //in ra do dai chuoi 
	for(int i = 0; i < strlen(b); i++){
		printf("b[%d] : %c \n"  , i, *(b + i));

	}
	//Nhap xau ky tu qua scan
	scanf("%s",a); //nhap chuoi nhung khong nhap duoc dau cach 
	printf("Chuoi a : %s", a);
	
	//Chuoi dau cach ta dung gets() hoac fgets()
    return 0;
}

