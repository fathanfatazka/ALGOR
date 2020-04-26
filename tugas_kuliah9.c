#include <stdio.h>

int main(){
	int masukan, i = 0, nilai, sum, maks = 0, min = 999999;
	double hasil;
	scanf("%d", &masukan);
	
	for(i=0; i<masukan; i++){
		scanf("%d", &nilai);
		sum+=nilai;
		
		if(nilai > maks){
			maks = nilai;
		}
		if(nilai < min){
			min = nilai;
		}
	}
	hasil = (double) sum / masukan;
	printf("%.2lf", hasil);
	
	printf(" %d ", min);
	
	printf("%d\n", maks);
	
	return 0;
}
