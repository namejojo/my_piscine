#include <unistd.h>

int	ft_strlen(char *str)
{
	int ind;

	int a = 0;
	ind = 0;
	while((str++)[a])
		ind++;
	return(ind);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}