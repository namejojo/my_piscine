#include <stdlib.h>
#include <stdio.h>

char **ft_split(char *str, char *charset);
int ft_str_count(char *str, char *charset);
int ft_check(char ch, char *charset);
void ft_malloc(char *str, char *charset, char **strs);

int main(void)
{
	char *str = "bla bla bla bla";
	char charset[] = " l";
	char **strs;
	int ind = 0;

	ft_split(str, charset);

//	while(strs[ind] != NULL)
//	{
//		printf("%s", strs[ind]);
//		ind++;
//	}
}

char **ft_split(char *str, char *charset)
{
	char **strs;
	int str_count;
	int ind;
	
	str_count = ft_str_count(str, charset);
	strs = (char **)malloc((str_count + 1) * sizeof(char*));
	strs[str_count + 1] = NULL;
	ft_malloc(str, charset, strs);
}

void ft_malloc(char *str, char *charset, char **strs)
{
	int ind;
	int str_count;
	int char_count;

	str_count = 0;
	ind = 0;
	
	while(str[ind] != '\0')
	{
		char_count = 0;
		while(ft_check(str[ind], charset) == 1)
			ind++;
		if(ft_check(str[ind], charset) == 0)
		{
			while(ft_check(str[ind], charset) == 0 && str[ind] != '\0')
			{
				char_count++;
				ind++;
			}
			strs[str_count] = (char *)malloc((char_count + 1) * sizeof(char));
		str_count++;
		}
	}
}

int ft_str_count(char *str, char *charset)
{
	int ind;
	int str_count;

	str_count = 0;
	ind = 0;
	
	while(str[ind] != '\0')
	{
		while(ft_check(str[ind], charset) == 1)
			ind++;
		if(ft_check(str[ind], charset) == 0)
		{
			while(ft_check(str[ind], charset) == 0 && str[ind] != '\0')
				ind++;
		str_count++;
		}
	}
	return(str_count);
}

int ft_check(char ch, char *charset)
{
	int ind;

	ind = 0;
	while(charset[ind] != '\0')
	{
		if(charset[ind] == ch)
			return(1);
		ind++;
	}
	return(0);
}