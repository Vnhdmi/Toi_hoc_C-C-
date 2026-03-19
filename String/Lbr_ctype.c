#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	//Kiem tra loai ky tu
	int chuso = 0, chucai = 0, dacbiet = 0;
	char c [] ="tets alo alo 1234 @@@@" ;
	for(int i = 0; i< strlen(c);i++){
		if(isdigit(c[i])) 
		{chuso++;}
	 	else if (isalpha(c[i]) ) {
	 		chucai++;
		 }
//	 	else if (tolower(c)){
//	 		 dacbiet++;
//		 }
//	else{
//		dacbiet++;
//	}
	else if (ispunct(c[i])){
		dacbiet++;
	}
	}
  	printf("So luong chu so : %d\n", chuso);
    printf("So luong chu cai : %d\n", chucai);
    printf("So luong ki tu dac biet : %d\n", dacbiet);


    return 0;
}

