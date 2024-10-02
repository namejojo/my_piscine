#include <unistd.h>
#include <stdio.h>

void ft_putnbr_base(int nbr, char *base);
int nlen(int nb);
int str_len(char *str);
int comp(char *base, int size);

int main(void)
{
	char *base = "0123456789";
	ft_putnbr_base(12, base);
}

void ft_putnbr_base(int nbr, char *base)
{
	char str[50];
	int ind;
	int bas;

	bas = str_len(base);
	ind = 0;
	if(comp(base, str_len(base)) == 1)
	{
		while(nbr != 0)
		{	
			str[ind++] = base[nbr % bas];
			nbr = nbr / bas;
		}
		str[ind] = '\0';
		while (ind >= 0)
			write(1, &str[ind--], 1);
	}
}

int str_len(char * str)
{
	int ind;

	ind = 0;
	while (str[ind] != '\0')
		ind++;
	return(ind);
}

int comp(char *base, int size)
{
	int upper;
	int lower;

	if(str_len(base) < 2)
		return(0);
	lower = 0;
	while(base[lower] != '\0')
	{
		if(base[lower] == '+' || base[lower] == '-')
			return(0);
		lower++;
	}
	lower = 0;
	while(lower != size - 1)
	{
		upper = lower + 1;
		while(base[upper] != '\0')
		{
			if(base[upper] == base[lower])
				return (0);
			else if(base[upper] != base[lower])
				upper++;
		}
		lower++;
	}
	return(1);
}