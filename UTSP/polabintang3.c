#include <stdio.h>

int main(){
	int a, b = 1, c = 0, baris;
	scanf("%d", &baris);
	
	for(a=0; a<baris; a++, c = 0){
		/* while(b != baris-1){
			printf(" ");
		}*/ 
		for(b=2; b<=baris-a; b++){
			printf(" ");
		}
		while(c != a+1){
			printf("*");
			c++;
		}
		/*for(c=1; c<=baris+1; c++){
			printf("*");
		}*/
		printf("\n");
	}
	return 0;
}
