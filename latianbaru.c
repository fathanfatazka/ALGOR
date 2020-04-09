#include <stdio.h>
#include <stdlib.h>
/*
int main(void){
	int a, b, c, d, banding1, banding2, banding3;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	banding1 = abs (a - b);
	banding2 = abs (b - c);
	banding3 = abs (c - d);
	
	if((banding1 >= banding2 && banding2 >= banding3) || (banding1 >= banding3 && banding3 >= banding2))
		printf("%d\n", banding1);
	else if((banding2 >= banding3 && banding3 >= banding1) || (banding2 >= banding1 && banding1 >= banding3))
		printf("%d\n", banding2);
	else if((banding3 >= banding1 && banding1 >= banding2) || (banding3 >= banding2 && banding2 >= banding1))
		printf("%d\n", banding3);
		
	return 0;
}*//*

int main(){
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	if(a == b && b == c && c == d)
		printf("KONSTAN\n");
	else if(a >= b && b >= c && c >= d){
		printf("MONOTON MENURUN\n");	
	}
	else if(a <= b && b <= c && c <= d){
		printf("MONOTON MENAIK\n");
	}
	else printf("TIDAK MONOTON\n");
	
	return 0;
}*//*

int main(){
	float n1, n2, n3, ratarata;
	scanf("%f%f%f", &n1, &n2, &n3);
	
	ratarata = (float) (n1 + n2 + n3) / 3 ;
	
	if(ratarata < 30)
		printf("%.2lfKURANG", ratarata);
	else if(ratarata >= 30 && ratarata <60)
		printf("%.2lfCUKUP", ratarata);
	else printf("%.2lfBAIK", ratarata);
	
	return 0;
}*/

int main(){
	int hasil, a, hasil1, hasil11;
	scanf("%d", &a);
	
	hasil = a % 3600;
	hasil11 = hasil / 60;
	hasil1 = hasil % 60;
	
	printf("%d %d %d", hasil, hasil11, hasil1);
}
