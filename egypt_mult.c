#include <stdio.h>

int main() {
	int a, b, product,  temp;
	printf("input a and b: " );
	scanf("%d%d", &a, &b);
	temp = b;
	temp = b%2;
	b /= 2;
	product = a*temp;
	while (b != 0){
		temp = b%2;
		a += a;
		b /= 2;
		product += a*temp;
	};
	printf("product = %d\n", product);
};
