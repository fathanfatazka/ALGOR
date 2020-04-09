#include <stdio.h>
/*
int main(void){
	int a, b, c, hasil1, hasil2, hasil3, total;
	scanf("%d%d%d", &a, &b, &c);
	
	hasil1 = a/b;
	hasil2 = a/c;
	hasil3 = a/(b*c);
	
	total = hasil1 + hasil2 - hasil3;
	printf("%d\n", total);
	
	return 0;
}*//*

int main(void){
	double alas, tinggi, hasil;
	scanf("%lf %lf", &alas, &tinggi);
	
	hasil = (alas*tinggi) / 2;
	
	printf("%.4lf\n", hasil);
	return 0;
}*//*

int main(){
	float jari, luas;
	scanf("%f", &jari);
	
	luas = 3.14*(jari*jari);
	
	printf("%.2f\n", luas);
	return 0;
}*//*
int main(){
	printf("Dean, Hello. Apa Kabar?\n");
	return 0;	
}*//*
int main(void){
	int c, kon;
	double konv;
	scanf("%d", &c);
	konv = (double) c *9/5 + 32;
	printf("%.2lf\n", konv);
	return 0;
}*//*

int main(void){
	unsigned int a, b, hasil;
	scanf("%u%u", &a, &b);
	
	hasil = a % b;
	
	printf("%u\n", hasil);
	return 0;
}*//*

int main(void){
	int a, b;
	double c, hasil;
	scanf("%d %d", &a, &b);
	scanf("%lf", &c);
	
	hasil = (double) a/b+c;
	
	printf("%.2lf\n", hasil);
	return 0;
}*//*
int main(){
	int umur, konc, konv;
	scanf("%d", &umur);
	
	konc = umur/12;
	konv = umur%12; 
	
	printf("%d %d\n", konc, konv);
	return 0;
}*/
int main(void){
	int hasil, hasil1, hasil2, hasil3, hasil4, j1, m1, d1, j2, m2, d2, waktu1, waktu2;
	scanf("%d %d %d", &j1, &m1, &d1);
	scanf("%d %d %d", &j2, &m2, &d2);
	
	j1*=3600;
	m1*=60;
	j2*=3600;
	m2*=60;
	
	waktu1 = j1 + m1 + d1;
	waktu2 = j2 + m2 + d2;
	
	if(waktu2 > waktu1){
		hasil = waktu2 - waktu1;
	}
	else hasil = 86400 - (waktu1-waktu2);
	
	hasil1 = hasil / 3600;
	hasil2 = hasil % 3600;
	hasil3 = hasil2 / 60;
	hasil4 = hasil2 % 60;

	printf("%d %d %d\n", hasil1, hasil3, hasil4);
	return 0;
}
