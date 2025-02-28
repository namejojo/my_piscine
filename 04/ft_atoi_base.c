#include <stdio.h>
#include <unistd.h>

int strcompbase(char *str, int lower, char * base);
int ft_atoi_base(char *str, char *base);
int str_len(char * str);

int main (void)
{
	printf("%d", ft_atoi_base("ffffffff", "0123456789abcdef"));
}

int ft_atoi_base(char *str, char *base)
{
	int pos;
	int ind;
	int num;
	int size;

	size = str_len(base);
	pos = 0;
	ind = 0;
	num = 0;
	while ((str[ind] >= 9 && str[ind] <= 13) || str[ind] == 32)
		ind++;
	while (str[ind] == '-' || str[ind] == '+')
	{
		if (str[ind] == '-')
			pos++;
		ind++;
	}
	while (strcompbase(str, ind, base) >= 0) 
	{
		num = num * size;
		num = num + strcompbase(str, ind++, base);
	}
	if(pos % 2 != 0)
		num = 0 - num;
	return(num);
}

int strcompbase(char *str, int lower, char * base)
{
	int upper;

	upper = 0;
	while(base[upper] != '\0')
	{
		if(str[lower] == base[upper])
			return (upper);
		else if(str[lower] != base[upper])
			upper++;
	}
	return(-1);
}

int str_len(char * str)
{
	int ind;

	ind = 0;
	while (str[ind] != '\0')
		ind++;
	return(ind);
}