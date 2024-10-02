#include <stdio.h>

int ft_strlen(char * str);

int main (void)
{
	int i;

	i = ft_strlen("olaa bom dia");
	printf("%d", i);
}

int ft_strlen(char * str)
{
	int ind;

	ind = 0;
	while (str[ind] != '\0')
		ind++;
	return (ind);
}