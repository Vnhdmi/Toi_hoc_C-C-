#include <stdio.h>
#include <string.h>

int hmstrlend(char *c){
	int n = 0;
	while (c[n] != '\0'){
		++n;
	}
	
	return n;
	
}
int main(){
	char a[] ="java";
	int l = hmstrlend(a);
	
	printf(" do dai day %d ", l);

    return 0;
}

