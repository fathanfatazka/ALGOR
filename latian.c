#include <stdio.h>
/*
int main(void){
	int k1, k2, k3, k4;
	float total, harga, selisih;
	scanf("%d%d%d%d", &k1, &k2, &k3, &k4);
	scanf("%f%f", &harga, &selisih);
	
	total = (k1*harga) + (k2*(harga + selisih)) + (k3*(harga + 2*selisih)) + (k4*(harga + 3*selisih));
	
	printf("%.2f", total);
	return 0; 
		
}*//*

int main(void){
		
	int hasil, jam1, menit1, jam2, menit2, jt1, jt2, j1, j2, m1, m2, d1, d2;
	scanf("%d%d%d", &j1, &m1, &d1);
	scanf("%d%d%d", &j2, &m2, &d2);
	
	//konversi detik
	jam1 = j1*3600;
	menit1 = m1*60;
	jam2 = j2*3600;
	menit2 = m2*60;
	
	//total jam
	jt1 = jam1 + menit1 + d1;
	jt2 = jam2 + menit2 + d2;
	
	hasil = jt2 - jt1;
	
	printf("%d", hasil);
	return 0;
}*//*

int main(void){
	float a1, b1, a2, b2, a3, b3;
	float diskonan, pdp, diskon;
	scanf("%f%f%f%f%f%f", &a1, &b1, &a2, &b2, &a3, &b3);
	scanf("%f", &diskonan);
	
	pdp = (a1*b1) + (a2*b2) + (a3*b3);	
	diskon = pdp * (diskonan/100.0);
	pdp-=diskon;
	
	printf("%.2f %.2f\n", diskon, pdp);
	return 0;
	
}*//*
int main(void){
	int bil1, bil2, bil3;
	float ans1, ans2;
	scanf("%d%d%d", &bil1, &bil2, &bil3);
	
	ans1 = (float) (-bil2 + sqrt (bil2*bil2-4*bil1*bil3)) / 2*bil1; // d = sqrt (b*b-4*bil1*bil3)
	ans2 = (float) (-bil2 - sqrt (bil2*bil2-4*bil1*bil3)) / 2*bil1;
	
	printf("%.2f %.2f\n", ans1, ans2);
	return 0;
}*//*

int main(void){
	long int celcius;
	double konv;	
	scanf("%ld", &celcius);
	
	konv = (double) celcius*9/5 + 32;
	printf("%.2lf\n", konv);
	
	return 0;
}*//*

int main(void){
	unsigned int n1, n2, hasil;
	scanf("%u%u", &n1, &n2);
	
	hasil = n1 % n2;
	
	printf("%u\n", hasil);
	return 0;
	
	
}*//*

int main(void){
	int diameter;
	double kel, luas;
	scanf("%d", &diameter);
	
	kel = (double)2*3.14*(0.5*diameter);
	luas =  (double)3.14*((0.5*diameter)*(0.5*diameter));
	
	printf("%.2lf %.2lf\n", kel, luas);
	return 0;
}*//*
int main(void){
	int a, b;
	double c, hasil;
	scanf("%d%d%lf", &a, &b, &c);
	
	hasil = (double) a/b+c;
	
	
	printf("%.2lf\n", hasil);
	return 0;
}*//*
#include <math.h>

int main(){
	int pyt1, pyt2, x1, x2, y1, y2, x3, y3;
	scanf("%d %d", &x1, &y1);
	scanf("%d %d", &x2, &y2);
	scanf("%d %d", &x3, &y3);
	
	pyt1 = (sqrt) (((x3 - x1)*(x3 - x1)) + ((y3 - y1)*(y3 - y1)));
	pyt2 = (sqrt) (((x3 - x2)*(x3 - x2)) + ((y3 - y2)*(y3 - y2)));
	 
	if(pyt1 < pyt2){
		printf("1\n");
	}
	else if(pyt1 == pyt2){
		printf("12\n");
	} 
	else printf("2\n");
		
	return 0;
}*//*

int main(void){
	double a, b, c, disk;
	scanf("%lf%lf%lf", &a, &b, &c);
	
	disk = (b*b) - 4*a*c;
	
	if(disk == 0)
		printf("1\n");
	else if(disk < 0)
		printf("0\n");
	else if(disk > 0)
		printf("2\n");
		
	return 0;
}*/

int main(){
	char huruf;
	scanf("%c", &huruf);
	
	switch(huruf){
		case 'A': printf("4\n"); break;
		case 'a': printf("4\n"); break;
		case 'B': printf("3\n"); break;
		case 'b': printf("3\n"); break;
		case 'C': printf("2\n"); break;
		case 'c': printf("2\n"); break;
		case 'D': printf("1\n"); break;
		case 'd': printf("1\n"); break;
		case 'E': printf("0\n"); break;
		case 'e': printf("0\n"); break;
		default: printf("-1\n"); break;
	}
	return 0;
}


