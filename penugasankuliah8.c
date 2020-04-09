#include<stdio.h>

int main(void){
	// P1 == pernah pergi ke wilayah episentrum penyebaran virus
	// P2 == pernah melakukan kontak dengan org yg berstatus PTV
	// P3 == suhu tubuh tinggi dan tenggorokan sangat sakit serta sering batuk
	// P4 == hasil uji lab adalah positif
	// ODP == (P1 == 1 && P3 == 0 && P4 == 0) || (P2 == 1 && P3 == 0 && P4 == 0)
	// PDP == (P1 == 1 && P3 == 1) || (P2 == 1 && P3 == 1)
	// PTV == (P1 == 1 && P3 == 1) || (P2 == 1 && P3 == 1) && P4 == 1
	// OBV == P1 == 0 && P2 == 0 && P3 == 0 && P4 == 0
	// else printf("Tak Dapat Ditentukan\n");
	
	int P1, P2, P3, P4;
	scanf("%d%d%d%d", &P1, &P2, &P3, &P4);
	
	if ((P1 == 1 && P3 == 0 && P4 == 0) || (P2 == 1 && P3 == 0 && P4 == 0)){
		printf("ODP\n");
	}
	else if ((P1 == 1 && P3 == 1 && P2 == 0 && P4 == 0) || (P2 == 1 && P3 == 1 && P1 == 0 && P4 == 01	)){
		printf("PDP\n");
	}
	else if (P1 == 1 && P2 == 1 && P3 == 1 && P4 == 1){
		printf("PTV\n");
	}
	else if (P1 == 0 && P2 == 0 && P3 == 0 && P4 == 0){
		printf("OBV\n");
	}
	else printf("Tak Dapat Ditentukan\n");
	
	return 0;
}
