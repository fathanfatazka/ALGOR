#include <stdio.h>

int main(){
	int n, i, sum = 0;
	scanf("%d", &n);
	while(n!=0){	
		n/=10;
		sum++;	
	}
	printf("%d\n", sum);
	return 0;
}




