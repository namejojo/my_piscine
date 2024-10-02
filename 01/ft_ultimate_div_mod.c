#include <stdio.h>

void ft_div_mod(int *a, int *b);

int main (void){
	int a = 70, b = 10;

	ft_div_mod(&a , &b);
	printf("%d %d \n", a, b);
}

void ft_div_mod(int *a, int *b){
	int c;
	 c = *a / *b;
	*b = *a % *b;
	*a =  c;
}