#include <stdio.h>

int elevated(int nb, int power);

int main(void)
{
	printf("%d",elevated(2,13));
}

int elevated(int nb, int power)
{
	if(power < 1)
		return(0);
	if(power == 1)
		return(nb);
	nb = nb * elevated(nb, power - 1);
}