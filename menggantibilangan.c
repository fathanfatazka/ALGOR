#include <stdio.h>

int main(){
	int bild, bilp, i=0, nilai;
	scanf("%d%d", &bild, &bilp);
	
	while(nilai != -1){
		scanf("%d", &nilai);
		if(nilai == bild){
			nilai = bilp;
		}
		if(nilai == -1) break;
		printf("%d", nilai);
		printf(" ");	
	}
	
	printf("\n");
	
	return 0;
}
