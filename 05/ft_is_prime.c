#include <stdio.h>

int ft_is_prime(int nb);

int main(void)
{
	printf("%d", ft_is_prime(294));
}

int ft_is_prime(int nb)
{
	int n1;
	int n2;

	n1 = 1;
	n2 = 2;
	while(n1 <= nb / 2)
	{
		// verificar se n2 == nb / 2 funciona em vez de n2 == nb
		if(n2 == nb / 2)
			n2 = n1++;
		if(n1 * n2++ == nb)
			return(0);
	}
	return(1);
}