#include <stdio.h>

int ft_is_prime(int nb);

int main(void)
{
	printf("%d", ft_is_prime(308));
}

int ft_is_prime(int nb)
{
	int n1;
	int n2;

	n1 = 1;
	n2 = 2;
	while(n1 <= nb / 2)
	{
		if(n2 == nb)
			n2 = n1++;
		if(n1 * n2++ == nb)
		{
			n1 = 1;
			n2 = 2;
			nb++;
		}
	}
	return(nb);
}