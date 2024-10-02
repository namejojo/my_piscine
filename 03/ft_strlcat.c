#include <stdio.h>

int ft_strcat(char *src, char *dest, unsigned int n);
int ft_strlen(char * str);

int main (void)
{
	char src[] = "=ola mundo... once again????";
	char dest[50] = "eu estou prestes a dizer =";

	printf("%d", ft_strcat(src, dest, 5));
}

int ft_strcat(char *src, char *dest, unsigned int n)
{
	int ind;
	int ind2;

	ind = 0;
	ind2 = ft_strlen(dest);
	while(ind != n && src[ind] != '\0')
	{
		dest[ind2] = src[ind];
		ind++;
		ind2++;
	}
	dest[ind2] = '\0';
	return (ind2);
}

int ft_strlen(char * str)
{
	int ind;

	ind = 0;
	while (str[ind] != '\0')
		ind++;
	return(ind);
}