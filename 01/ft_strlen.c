#include <unistd.h>

int ft_putstr(char * str);

int main (void)
{
	ft_putstr("hoje eu nao me apeteceu");
}

int ft_putstr(char * str)
{
	int ind;

	ind = 0;
	while (str[x] != '\0')
		ind++;
	return(ind);
}