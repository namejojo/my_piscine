#include <stdio.h>

char * ft_strcat(char *src, char *dest);
int ft_strlen(char * str);

int main (void)
{
	char src[] = "=ola mundo... once again????";
	char dest[50] = "eu estou prestes a dizer =";
	ft_strcat(src, dest);

	printf("%s", dest);
}

char* ft_strcat(char *src, char *dest)
{
	int ind;
	int ind2;

	ind = 0;
	ind2 = ft_strlen(dest);
	while(src[ind] != '\0')
	{
		dest[ind2] = src[ind];
		ind++;
		ind2++;
	}
	return (dest);
}

int ft_strlen(char * str)
{
	int ind;

	ind = 0;
	while (str[ind] != '\0')
		ind++;
	return (ind);
}