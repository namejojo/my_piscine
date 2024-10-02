#include <stdio.h>

char *ft_strncpy (char *dest, char * rc, unsigned int n);

int main(void)
{
	char dest[50];
	char *src;
	int a;

	a = 30;
	src = "ola mundo maybe who knows tsu tsa tsa tsucutu tucuta tucuta";
	*dest = *ft_strncpy (dest, src, a);
}

char *ft_strncpy (char * dest, char * src, unsigned int n)
{
	int i;

	i = 0;
	while(i <= n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	
	return (dest);
}