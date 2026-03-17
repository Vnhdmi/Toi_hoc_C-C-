#include <stdio.h>

void LietKe (){
	int arrays [10] ;
	int tc, tl ;
	int max = 0;
	int min = arrays[10] ;
	for(int i =0 ; i < 10 ; i++){
		printf("Nhap gia tri cho pahn tu thu %d cua mang \n ",i+1 );
		scanf("%d", &arrays[i] ); 
		
		if(arrays[i]%2==0){
			tc+=1;
		}else{
			tl+=1;
		}
		if (arrays[i]> max){
			max = arrays[i];
		}else if (arrays[i]<min){
			min = arrays[i];
		}
	}
	
	printf("Co %d so le :\n", tl);
	printf("Co %d so chan :\n" ,tc);
	printf("So lon nhat %d;\n", max);
	printf("So nho nhat %d;\n", min);
}
int main(){
	LietKe();

    return 0;
}

