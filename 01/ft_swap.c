#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a , int *b);

int main (void){
	int a = 3, b = 6;
	char a1, b1;

	ft_swap(&a , &b);

	a1 = a + '0';
	b1 = b + '0';
	write( 1, &a1, 1);
	write( 1, " ", 1);
	write( 1, &b1, 1);
	write( 1, "\n", 1);

}

void ft_swap(int *a , int *b){
	int swap;
	swap = *a;
	*a = *b;
	*b = swap;
}
