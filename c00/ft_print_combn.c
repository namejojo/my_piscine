#include <unistd.h>
#include <stdio.h>

int ft_elev(int a);
void ft_putnbr(int nb);
int ft_nbrlen(int nb);
int	check(int n);
void	ft_print_combn(int n);

int	main(void)
{
	ft_print_combn(4);
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

	l = ft_nbrlen(n);
	while(--l >= 1)
	{
		l_com = l_dig(n , l);
		r = ft_nbrlen(n) - (ft_nbrlen(n) - l);
		while(r >= 1)
		{
			r_com = r_dig(n, r--);
			if(l_com >= r_com)
				return (0);
		}
	}
	return (1);
}

void	ft_print_combn(int n)
{
	int num;


	num = ft_elev(n - 2);
	while(ft_nbrlen(num) < n + 1)
	{
		if(check(num))
		{
			if(ft_nbrlen(num) < n)
				write(1, "0", 1);
			ft_putnbr(num);
			write(1, " ", 1);
		}
		num++;
	}
}

int	ft_nbrlen(int nbr)
{
	int len = 1;

	while (nbr >=10)
	{
		nbr = nbr/10;
		len++;
	}
	return len;
}

void putdigit(int num)
{
	int a;

	a = num + 48;
	write(1, &a, 1);
}

int ft_elev(int len)
{
	int num;

	num = 1;
	while (len > 0)
	{
		num = num * 10;
		len--;
	}
	return (num);
}

void ft_putnbr(int num)
{
	int div;
	int c_div;
	int pr;

	div = ft_nbrlen(num);
	while(div > 0)
	{

		pr = num;
		c_div = div;
		while(c_div > 1)
		{
			pr = pr / 10;
			c_div--;
		}
		pr = pr % 10;
		putdigit(pr);
		div--;
	}
}
