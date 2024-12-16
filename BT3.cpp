#include<stdio.h>

int main(){
	int n; printf("Hay nhap mot so nguyen"); scanf("%d", &n);
	if (n % 3 == 0 && n % 5 == 0) { 
		printf("%d chia het cho 3 và 5.\n", n); 
	} else if (n % 3 == 0) { 
		printf("%d chia het cho 3.\n", n); 
		} else if (n % 5 == 0) { 
			printf("%d chia het cho 5.\n", n); 
			} else { 
				printf("%d không chia het cho 3 hoac 5.\n", n); }
	return 0;
}
