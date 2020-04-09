#include <stdio.h>

int main(void){
	int nilai, hasil;
	scanf("%d", &nilai);
	
	if (nilai > 50){
		hasil = (nilai - 50) * 3;
		printf("%d", hasil);
	} 
	else{
		hasil = 50 - nilai;
		printf("%d", hasil);
	}
}
