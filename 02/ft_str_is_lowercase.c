#include <stdio.h>

int ft_str_is_alpha(char *str);

int main(void)
{
	char *str;

	str = "sikbdibopA";
	printf("%d", ft_str_is_alpha(str));
}

int ft_str_is_alpha(char *str)
{
	int a;

	a = 0;
	while(str[a] != '\0')
	{
		if(str[a] >= 'a' && str[a] <= 'z')
			a++;
			else
				return(0);
	}
	return(1);
}