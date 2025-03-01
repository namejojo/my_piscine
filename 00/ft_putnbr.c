#include <unistd.h>
#include <stdio.h>

void ft_putnbr(int nb);


int main (void)
{
	ft_putnbr(2034326353);
}

int nbm_lenght(int nb)
{
	int a = nb, b = 0;

	while (a >=10){
		a = a/10;
		b++;
	}
	return b;
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

// new putnbr

int f_dig(int n, int s)
{
	while(s > 0)
	{
		n = n / 10;
		s--;
	}
	return (n % 10);
}

int	check(int n)
{
	int l;


	l = nbrlen(n) - 1;
	while(l >= 0)
	{
		printf("%d ", f_dig(n, l));

		l--;
	}
}