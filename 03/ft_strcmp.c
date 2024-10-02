#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main (void)
{
	printf("%d", ft_strcmp("abA", "abAa"));
}

int ft_strcmp(char *s1, char *s2)
{
	int ind;

	ind = 0;
	while((s1[ind] != '\0' && s2[ind] != '\0') && (s1[ind] == s2[ind]))
		ind++;
	ind = s1[ind] - s2[ind];
	return (ind);
}