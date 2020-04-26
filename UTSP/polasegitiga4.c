#include <stdio.h>

int main(void){
	int asep, joko, c = 0, baris;
	scanf("%d", &baris);
	
	for(asep=1; asep<= baris; asep++){
		for(c=2; c<=asep; c++){
			printf(" ");
		}
		for(joko=baris; joko>=asep; joko--){
			printf("*");
		}
	printf("\n");
	}
	return 0;
}
