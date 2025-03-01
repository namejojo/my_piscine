#include <unistd.h>
#include <stdio.h>

int nbrlen(int num)
{
	int	len;

	len = 1;
	while(num > 10)
	{
		num = num / 10;
		len++;
	}
	return (len);
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
	int a;

	num = 1;
	while (len > 1)
	{
		num = num * 10;
		len--;
	}
}

void ft_putnbr(int num)
{
	int len;
	int pr;

	len = nbrlen(num);
	while (len > 0)
	{
		pr = num;
		while(pr > 10)
			pr = pr / 10;
		putdigit(pr);
		num = num - pr * ft_elev(nbrlen(num));
		len--;
	}
}

int main(void)
{
	ft_putnbr(12301);
}