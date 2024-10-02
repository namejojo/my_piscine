#include <unistd.h>
#include <stdio.h>

void ft_putnbr(int nb);

int nbm_lenght(int nb)
{
	int a = nb, b = 0;

	while (a >=10){
		a = a/10;
		b++;
	}
	return b;
}

int main (void)
{
	ft_putnbr(234326353);
}

void ft_putnbr(int nb){
	char ch;
	int i, a, b;

	b = nbm_lenght(nb);
	while (b >= 0){
		i = 0;
		a = nb;

		while(i != b){
			a = a/10;
			i++;
		}
		if (a>=10)
			a = a%10;
		ch = a + '0';
		write(1, &ch, 1);
		b--;
	}
	write (1, "\n", 1);
}