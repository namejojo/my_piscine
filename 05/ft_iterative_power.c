#include <stdio.h>

int elevated(int nb, int power);

int main(void)
{
	printf("%d",elevated(3, 1));
}

int elevated(int nb, int power)
{
	int n;

	n = nb;
	if(power-- < 1)
		return(0);
	while (power-- != 0)
		nb = n * nb;
	return(nb);
}