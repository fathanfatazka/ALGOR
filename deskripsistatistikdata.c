#include <stdio.h>

int main(){
	long long int sum = 0;
	int nilai, i, masukan, maks = 0, min = 2000000001;
	double hasil;
	scanf("%d", &nilai);
	
	if(1 <= nilai <= 1000){
		for(i=0; i<nilai; i++){
			scanf("%d", &masukan);
			sum+=masukan;
		
		if(masukan > maks){
			maks = masukan;
			}
		if(masukan < min){
			min = masukan;
			}	
		}
	}
	hasil = (double) sum/nilai;
	
	printf("%d ", min);
	printf("%d ", maks);
	printf("%.2lf\n", hasil);
	
	return 0;
}
