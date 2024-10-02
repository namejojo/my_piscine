#include <stdio.h>

int ft_str_is_alpha(char *str);

int main(void)
{
	char *str;

	str = "DFSSDFSDrf34$!^$#@#!dg";
	printf("%d", ft_str_is_alpha(str));
}

int ft_str_is_alpha(char *str)
{
	int a;

	a = 0;
	while(str[a] != '\0')
	{
		if(str[a] >= 0 && str[a] <= 31)
			return(0);
			else
				a++;
	}
	return(1);
}