#include <unistd.h>
#include <stdio.h>

int elevated(int a);
void ft_putnbr(int nb);
int nbrlen(int nb);
int	check(int n);
void	ft_print_r_combn(int n);

int	main(void)
{
	ft_print_r_combn(7);
}

int l_dig(int n, int l)
{
	while(l > 0)
	{
		n = n / 10;
		l--;
	}
	return (n % 10);
}

int r_dig(int n, int r)
{
	while(r > 1)
	{
		n = n / 10;
		r--;
	}
	return (n % 10);
}

int	check(int n)
{
	int l;
	int l_com;
	int r;
	int r_com;

	l = nbrlen(n);
	while(--l >= 1)
	{
		l_com = l_dig(n , l);
		r = nbrlen(n) - (nbrlen(n) - l);
		while(r >= 1)
		{
			r_com = r_dig(n, r--);
			if(l_com >= r_com)
				return (0);
		}
	}
	return (1);
}

void	ft_print_r_combn(int n)
{
	int num;

	num = elevated(n - 2);
	while(nbrlen(num) < n + 1)
	{
		if(check(num))
		{
			if(nbrlen(num) < n)
				putnbr(0);
			putnbr(num);
		}
		num++;
	}
}

int	elevated(int a)
{
	int len = 1;

	while (a > 0)
	{
		len = len*10;
		a--;
	}
	return len;
}

int	nbrlen(int nb)
{
	int len = 1;

	while (nb >=10)
	{
		nb = nb/10;
		len++;
	}
	return len;
}