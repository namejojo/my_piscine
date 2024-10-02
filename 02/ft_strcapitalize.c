#include <stdio.h>

char *ft_str_is_alpha(char *str);

int main(void)
{
	char str[] = " sik bF43ob  4j4j4j4j4j  fd|gdfgGFDSGDFAG] n523]a45j73+45GH";

	*str = *ft_str_is_alpha(str);
	printf("%s", str);
}

char *ft_str_is_alpha(char *str)
{
	int a;

	a = 0;
	if(str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	a++;
	while(str[a] != '\0')
	{
		if((str[a - 1] < 65 || str[a - 1] > 90) && (str[a - 1] < 97 || str[a - 1] > 122) && (str[a] >= 'a' && str[a] <= 'z'))
			str[a] = str[a] - 32;
		a++;
	}
	return(str);
} 