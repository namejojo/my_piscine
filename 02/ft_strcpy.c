#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main(void)
{
	char *src;
	char dest[50];

	src = "ola mundo outra vez";

	*dest = *ft_strcpy(dest, src);
}

char *ft_strcpy(char *dest, char *src)
{
	int ind;
	
	ind = 0;
	while (src[ind] != '\0')
	{
		dest[ind] = src[ind];
		ind++;
	}
	dest[ind] = '\0';
	
	return (dest);
}
