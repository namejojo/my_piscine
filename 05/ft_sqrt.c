#include <stdio.h>

int ft_sqrt(int nb);

int main(void)
{
	printf("%d", ft_sqrt(100));
}

int ft_sqrt(int nb)
{
	int n;

	n = 1;
	while(n * n <= nb)
		if(n * n == nb)
			return(n);
		else
			n++;
	return(0);
}