#include <stdio.h>

int ft_str_is_numeric(char *str);

int main(void)
{
	char *str;

	str = "12435343409";
	printf("%d", ft_str_is_numeric(str));
}

int ft_str_is_numeric(char *str)
{
	int a;

	a = 0;
	while(str[a] != '\0')
	{
		if(str[a] >= '0' && str[a] <= '9')
			a++;
			else
				return(0);
	}
	return(1);
}