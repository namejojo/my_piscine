#include <stdlib.h>
#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);
int ft_totalsize(int size, char **, char *sep);
int ft_strlen(char * str);
char* ft_strcat(char *src, char *dest);
int ft_strlen(char * str);

int main(void)
{
	char *strs[] = {"ola", "mr", "penguin", NULL};
	
	printf("%s", ft_strjoin(3,  strs, "curry"));
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int total;
	int ind;
	int flag;
	char *dest;
	
	flag = 0;
	ind = -1;
	total = 0;
	while(strs[++ind] != NULL)
		total = total + ft_strlen(strs[ind]);
	total = total + (size - 1) * ft_strlen(sep);
	dest = (char*)malloc((total + 1) * sizeof(char));
	ind = -1;
	while(strs[++ind] != NULL)
	{
		if(flag++ == 1)
		ft_strcat(sep, dest);
		ft_strcat(strs[ind], dest);
	}
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