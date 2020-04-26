#include <stdio.h>

int main(){
	int masukan, i, j;
	scanf("%d", &masukan);
	
	for(i=0; i<masukan; i++){
		for(j=0; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
}
