#include <stdio.h>

int ft_atoi(char *str);

int main (void)
{
	printf("%d",ft_atoi("    --21233121"));
}

int ft_atoi(char *str)
{
	int pos;
	int ind;
	int num;

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
	while (str[ind] >= '0' && str[ind] <= '9' ) 
	{
		num = num * 10;
		num = num - 48 + str[ind];
		ind++;
	}
	if(pos % 2 != 0)
		num = 0 - num;
	return(num);
}

