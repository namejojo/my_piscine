#include <stdio.h>

int ft_interative_factorial(int nb);

int main(void)
{
	printf("%d",ft_interative_factorial(4));
}

int ft_interative_factorial(int nb)
{
	int n;

	n = 0;
	if(nb > 0)
		n = 1;
	while(nb != 0)
		n = n * nb--;
	return(n);
}