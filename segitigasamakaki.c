#include <stdio.h>

int main(){
	int i, bar, kol, jml, jumlah, count = 0;
	scanf("%d", &jumlah);
	
	for(i=0; i<jumlah;i++){
		scanf("%d", &jml);	
		for(bar=1; bar<=jml; bar++, count=0){
			for(kol=1; kol<=jml-bar; kol++){
					printf(" ");
				}
				while(count != 2*bar-1){
					printf("*");
					++count;
				}
				// if(bar!=jml)
				printf("\n"); 	 
			}
			if(i!=jumlah-1) 
				printf("\n"); 
		}
	return 0;
}

