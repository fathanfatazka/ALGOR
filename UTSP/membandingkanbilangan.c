#include <stdio.h>

int main(void){
	int masukan, nilai, count1, count2;
	scanf("%d", &nilai);
	
	for(count1 = 1; count1 <= nilai; count1++){
		scanf("%d", &masukan);
		if(masukan >= 1000) printf("LEBIH BESAR ATAU SAMA DENGAN\n");
		else printf("LEBIH KECIL\n");
	}
	return 0;
}
