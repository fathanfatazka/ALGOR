#include <stdio.h>

int main(){
	int  i, count = 0, nilai, n = 0, masukan;
	double hasil;
	scanf("%d", &nilai);
	
	nilai >= 1 && nilai <= 150;
	/*for(i=0; i<nilai; i++){
		scanf("%d", &masukan);
		count+=masukan;
	}*/
	
	while(n<nilai){
		scanf("%d", &masukan);
		masukan >= 1 && masukan <= 50;
		count+=masukan;
		n++;
	}
	
	hasil = (double)count/nilai;
	printf("%.3lf", hasil);
	return 0;
}
