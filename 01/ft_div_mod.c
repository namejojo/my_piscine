#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main (void){
	int a = 70, b = 10, c, d;

	ft_div_mod(a , b, &c, &d);
	printf("%d %d \n", c, d);
}

void ft_div_mod(int a, int b, int *div, int *mod){
	*div = a/b;
	*mod = a%b;
}