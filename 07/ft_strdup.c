#include <stdlib.h>
#include <stdio.h>

char * ft_strdup(char *src);
int ft_strlen(char * str);

int main(void)
{
	char src[] = "asdbnasdoiasdgaosdr4413ft144f;asbd";
	char *dest;

	dest = ft_strdup(src);
	printf("%s", dest);
	free(dest);
}

char * ft_strdup(char *src)
{
	int len;
	char *dest;
	int ind;
	
	len = ft_strlen(src);
	dest = (char *)malloc(len*sizeof(char*) + 1);
	ind = 0;
	while (src[ind] != '\0')
	{
		dest[ind] = src[ind];
		ind++;
	}
	dest[ind] = '\0';
	
	return(dest);
}

int ft_strlen(char * str)
{
	int ind;

	ind = 0;
	while (str[ind] != '\0')
		ind++;
	return(ind);
}