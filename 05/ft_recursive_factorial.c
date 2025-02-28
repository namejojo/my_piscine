#include <stdio.h>

int ft_recursive_factorial(int nb);

int main(void)
{
	printf("%d",ft_recursive_factorial(4));
}

int ft_recursive_factorial(int nb)
{
	if(nb < 0)
		return(0);
	if(nb > 1)
		nb = nb * ft_recursive_factorial(nb - 1);
	return(nb);
}