#include <stdio.h>

int main(void){
	int n1, n2, n3;
	scanf("%d%d%d", &n1, &n2, &n3);
	
	if(n1 == n2){
		if(n1 > n3) printf("12\n");
	}
	if(n1 == n3){
		if(n1 > n2) printf("13\n");
	}
	if(n2 == n3){
		if(n2 > n1) printf("23\n");
	}
	else if(n1 > n2 && n1 > n3){
		printf("1\n");
	}
	else if(n2 > n1 && n2 > n3){
		printf("2\n");
	}
	else if(n3 > n1 && n3 > n2){
		printf("3\n");
		
	return 0;
	}	

}
