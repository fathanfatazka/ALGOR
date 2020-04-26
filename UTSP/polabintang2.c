#include <stdio.h>

int main(void){
	int i, j, masukan;
	scanf("%d", &masukan);
	
	for(i=masukan; i>0; i--){
		for(j=0; j<i; j++){
			printf("*");
		}
		printf("\n");
	}
	
}
