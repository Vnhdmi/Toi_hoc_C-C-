#include <stdio.h>
#include <string.h>

int main(){
	//cac cach nhap thong tin cho chuoi 
	char a [100];
	char b [100];
	char c [100];
	 // Chuoi khong co dau cach
	 printf("Nhap xau bang scantf");
	 scanf("%s",a); 
	 printf("Chuoi vua nhap %s" ,a);
	 
	 //chuoi co dau cach
	 printf("\n Nhap chuoi bang fgets() :");
	 getchar();// tieu thu dau Enter nhu Java
	 fgets(b,100,stdin);
	 printf("Chuoi nhap bang fgets() %s", b);
	 for(int i = 0; i< strlen(b);i++) {
	 	printf("_%c", *(b+i));

	 }
	 //Nhap bang fgets se dinh ky tu Enter phia sau
	 //Cach xoa 
	 b[strlen(b)-1] = '\0';
	 
	 for(int i = 0; i< strlen(b);i++) {
	 	printf("_%c_", *(b+i));

	 }
	 

    return 0;
}

