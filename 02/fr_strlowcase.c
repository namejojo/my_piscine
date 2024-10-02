#include <stdio.h>

char *ft_str_is_alpha(char *str);

int main(void)
{
	char str[] = "sikbF43ob    fdgdfgGFDSGDFAG n523457345GH";

	*str = *ft_str_is_alpha(str);
	printf("%s", str);
}

char *ft_str_is_alpha(char *str)
{
	int a;

	a = 0;
	while(str[a] != '\0')
	{
		if(str[a] >= 'A' && str[a] <= 'Z')
			str[a] = str[a] + 32;
		a++;
	}
	return(str);
}