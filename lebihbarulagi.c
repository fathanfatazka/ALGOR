#include <stdio.h>
/*
int main(void){
	int i, bil, angka, count = 0, bilangan = 0;
	scanf("%d", &bil);
	
	for(i=0; i<bil; i++){
		scanf("%d", &angka);
		count = angka;
		bilangan = bilangan - count;	
	}
}*//*

int main(){
	int i, n, a, b, sum = 0;
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%d %d", &a, &b);
		if(a % b == 0 || b % a ==0){
			sum++;
		}
	}printf("%d\n", sum);
	return 0;
}*/

int main(){
	double x;
	x = ceil (3.801);
	printf("%.2lf", x);
}
