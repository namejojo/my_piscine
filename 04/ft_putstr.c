#include <unistd.h>

void ft_putstr(char * str);

int main (void)
{
	ft_putstr("olaa bom dia");
}

void ft_putstr(char * str)
{
	int ind;

	ind = 0;
	while (str[ind] != '\0')
	{
		write(1, &str[ind], 1);
		ind++;
	}
}