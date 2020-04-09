#include <stdio.h>
/*
int main(void){
	printf("Hello World!\n");
	return 0;
}*//*

int main(void){
	int a, b, c;
	scanf("%d%d", &a, &b);
	
	c = a+b;
	
	printf("%d", c);
	return 0;
}*//*

int main(void){
	int a, b, c, d;
	scanf("%d%d", &a, &b);
	
	c=a+b;
	d=a*b;
	
	printf("%d\n%d", c, d);
	return 0;
}*//*

int main(void){
	int a, b, c;
	scanf("%d%d", &a, &b);
	
	c = a%b;
	
	printf("%d", c);
	return 0; 	
}*/

int main(void){
	int umur, ortu, c;
	scanf("%d%d", &umur, &ortu);

	if(umur >= 16){
		if(umur > 13 && umur < 16 && ortu == 1){
			printf("Rate    : R");
		}
	}
	else if(umur >= 13 && umur < 16){
		if(umur < 13 && ortu == 1){
			printf("Rate    : PG");	
		}
	}
	else{
		printf("Rate    : G");
	}
	return 0;
}
