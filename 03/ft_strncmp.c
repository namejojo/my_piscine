#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main (void)
{
	printf("%d", ft_strncmp("abAtydJhd", "abAtydjhd", 10));
}

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int ind;

	ind = 0;
	while((s1[ind] != '\0' && s2[ind] != '\0') && (s1[ind] == s2[ind]) && ind < n)
		ind++;
	ind = s1[ind] - s2[ind];
	return (ind);
}